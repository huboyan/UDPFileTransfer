/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *ipEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *portEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *fileEdit;
    QPushButton *open;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *start;
    QPushButton *exit;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar;
    QLabel *state;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(429, 220);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        ipEdit = new QLineEdit(Widget);
        ipEdit->setObjectName(QStringLiteral("ipEdit"));
        ipEdit->setStyleSheet(QLatin1String("font: 12pt \"Arial\";\n"
""));

        horizontalLayout_2->addWidget(ipEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        portEdit = new QLineEdit(Widget);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setStyleSheet(QStringLiteral("font: 12pt \"Arial\";"));

        horizontalLayout_4->addWidget(portEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        fileEdit = new QLineEdit(Widget);
        fileEdit->setObjectName(QStringLiteral("fileEdit"));
        fileEdit->setStyleSheet(QStringLiteral("font: 12pt \"Arial\";"));

        horizontalLayout->addWidget(fileEdit);

        open = new QPushButton(Widget);
        open->setObjectName(QStringLiteral("open"));
        open->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        horizontalLayout->addWidget(open);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        start = new QPushButton(Widget);
        start->setObjectName(QStringLiteral("start"));
        start->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        horizontalLayout_5->addWidget(start);

        exit = new QPushButton(Widget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setStyleSheet(QStringLiteral("font: 12pt \"Agency FB\";"));

        horizontalLayout_5->addWidget(exit);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(0, 0, -1, 10);
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_3->addWidget(progressBar);

        state = new QLabel(Widget);
        state->setObjectName(QStringLiteral("state"));
        state->setStyleSheet(QStringLiteral("font: 75 12pt \"Agency FB\";"));

        horizontalLayout_3->addWidget(state);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"right\"><span style=\" font-size:14pt;\">  IP:</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt;\">PORT:</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"right\"><span style=\" font-size:12pt;\">File:</span></p></body></html>", 0));
        open->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", 0));
        start->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", 0));
        exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0));
        state->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\255\211\345\276\205\344\270\255\343\200\202\343\200\202\343\200\202\343\200\202</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
