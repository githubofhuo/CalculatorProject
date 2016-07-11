/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_history_Dialog
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearPushButton;
    QPushButton *copyPushButton;
    QPushButton *deletePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *usePushButton;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *history_Dialog)
    {
        if (history_Dialog->objectName().isEmpty())
            history_Dialog->setObjectName(QStringLiteral("history_Dialog"));
        history_Dialog->resize(422, 308);
        gridLayout_4 = new QGridLayout(history_Dialog);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clearPushButton = new QPushButton(history_Dialog);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));
        clearPushButton->setEnabled(false);
        clearPushButton->setAutoDefault(true);

        horizontalLayout->addWidget(clearPushButton);

        copyPushButton = new QPushButton(history_Dialog);
        copyPushButton->setObjectName(QStringLiteral("copyPushButton"));
        copyPushButton->setEnabled(false);
        copyPushButton->setAutoDefault(true);

        horizontalLayout->addWidget(copyPushButton);

        deletePushButton = new QPushButton(history_Dialog);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));
        deletePushButton->setEnabled(false);
        deletePushButton->setAutoDefault(true);

        horizontalLayout->addWidget(deletePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        usePushButton = new QPushButton(history_Dialog);
        usePushButton->setObjectName(QStringLiteral("usePushButton"));
        usePushButton->setEnabled(false);

        horizontalLayout->addWidget(usePushButton);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 1);

        lineEdit = new QLineEdit(history_Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setAutoFillBackground(true);
        lineEdit->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(history_Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setOverwriteMode(false);

        gridLayout_4->addWidget(plainTextEdit, 0, 0, 1, 1);

        QWidget::setTabOrder(usePushButton, clearPushButton);
        QWidget::setTabOrder(clearPushButton, copyPushButton);
        QWidget::setTabOrder(copyPushButton, deletePushButton);
        QWidget::setTabOrder(deletePushButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, lineEdit);

        retranslateUi(history_Dialog);

        usePushButton->setDefault(true);


        QMetaObject::connectSlotsByName(history_Dialog);
    } // setupUi

    void retranslateUi(QDialog *history_Dialog)
    {
        history_Dialog->setWindowTitle(QApplication::translate("history_Dialog", "History Record", 0));
        clearPushButton->setText(QApplication::translate("history_Dialog", "Clear", 0));
        copyPushButton->setText(QApplication::translate("history_Dialog", "Copy", 0));
        deletePushButton->setText(QApplication::translate("history_Dialog", "Delete", 0));
        deletePushButton->setShortcut(QApplication::translate("history_Dialog", "Del", 0));
        usePushButton->setText(QApplication::translate("history_Dialog", "Use", 0));
    } // retranslateUi

};

namespace Ui {
    class history_Dialog: public Ui_history_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
