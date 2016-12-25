#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QFile>
#include <QByteArray>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void start();
    void startTransfer();
    //void updateProgress(qint64 numBytes);
    void openFile();

private:
    Ui::Widget *ui;
    QUdpSocket *udpsocket;
    qint64  TotalBytes;        //总共需发送的字节数
    qint64  bytesWritten;      //已发送字节数
    qint64  bytesToWrite;      //待发送字节数
    qint64  loadSize;          //被初始化为一个4Kb的常量
    QString fileName;          //待发送的文件的文件名
    QFile *localFile;          //待发送的文件
    QByteArray *outBlock;       //缓存一次发送的数据

};

#endif // WIDGET_H
