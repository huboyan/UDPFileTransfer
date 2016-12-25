#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDataStream>
#include <QIODevice>
#include <QFile>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    loadSize = 1024;
    TotalBytes = 0;
    bytesWritten = 0;
    bytesToWrite = 0;
    ui->progressBar->setValue(0);
    ui->state->setText("客户端就绪");
    ui->progressBar->hide();
    ui->start->setEnabled(false);
    connect(ui->open,SIGNAL(clicked()),this,SLOT(openFile()));
    connect(ui->start,SIGNAL(clicked()),this,SLOT(start()));
    connect(ui->exit,SIGNAL(clicked()),this,SLOT(close()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::openFile()
{
    this->fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
    {
        ui->start->setEnabled(true);
        ui->fileEdit->setText(this->fileName);
    }
    return;
}

void Widget::start()
{
    ui->start->setEnabled(false);
    bytesWritten = 0;
    localFile = new QFile(fileName);
    if(!localFile->open(QFile::ReadOnly))
    {
        QMessageBox::warning(this,tr("应用程序"),tr("无法读取文件：%1\n%2").arg(fileName).arg(localFile->errorString()));

        return ;
    }
    TotalBytes = localFile->size();
    QDataStream  out(outBlock,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_7);
    QString currentfile = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);
    out<<qint64(0)<<qint64(0)<<currentfile;
    out.device()->seek(0);

    TotalBytes +=outBlock->size();
    out<<TotalBytes<<qint64((outBlock->size() - sizeof(qint64)*2));
    bytesToWrite = TotalBytes;
    ui->progressBar->setMaximum(this->TotalBytes);
    ui->progressBar->setValue((int)this->bytesWritten);
    ui->progressBar->show();

    this->startTransfer();
    return ;


}

void Widget::startTransfer()
{

    do{
        ui->state->setText("传输中");
        *outBlock = localFile->read(qMin(bytesToWrite, loadSize));

        bytesWritten +=udpsocket->writeDatagram(outBlock->data(),QHostAddress(ui->ipEdit->text()), quint16(ui->portEdit->text().toUInt()));
        bytesToWrite -=bytesWritten;
        ui->progressBar->setValue((int)this->bytesWritten);
        outBlock->resize(0);
    }while(bytesToWrite<0);
    localFile->close();
    return ;

}

//void Widget::updateProgress(qint64 numBytes)
//{

//}
