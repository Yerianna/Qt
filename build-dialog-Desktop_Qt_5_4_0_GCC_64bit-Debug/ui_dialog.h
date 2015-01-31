/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QWidget *centralWidget;
    QPushButton *btnPauseOrResume;
    QLabel *lblOriginal;
    QLabel *lblProcessed;
    QPlainTextEdit *txtXYRadius;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QStringLiteral("dialog"));
        dialog->resize(676, 423);
        centralWidget = new QWidget(dialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnPauseOrResume = new QPushButton(centralWidget);
        btnPauseOrResume->setObjectName(QStringLiteral("btnPauseOrResume"));
        btnPauseOrResume->setGeometry(QRect(15, 290, 99, 27));
        lblOriginal = new QLabel(centralWidget);
        lblOriginal->setObjectName(QStringLiteral("lblOriginal"));
        lblOriginal->setGeometry(QRect(5, 0, 320, 240));
        lblProcessed = new QLabel(centralWidget);
        lblProcessed->setObjectName(QStringLiteral("lblProcessed"));
        lblProcessed->setGeometry(QRect(345, 5, 320, 240));
        txtXYRadius = new QPlainTextEdit(centralWidget);
        txtXYRadius->setObjectName(QStringLiteral("txtXYRadius"));
        txtXYRadius->setGeometry(QRect(175, 260, 491, 101));
        dialog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(dialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 25));
        dialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dialog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        dialog->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(dialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        dialog->setStatusBar(statusBar);

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QMainWindow *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "dialog", 0));
        btnPauseOrResume->setText(QApplication::translate("dialog", "Pause", 0));
        lblOriginal->setText(QString());
        lblProcessed->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
