/********************************************************************************
** Form generated from reading UI file 'governancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOVERNANCEDIALOG_H
#define UI_GOVERNANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GovernanceDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelQRCodeTitle;
    QTextEdit *outUri;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GovernanceDialog)
    {
        if (GovernanceDialog->objectName().isEmpty())
            GovernanceDialog->setObjectName(QStringLiteral("GovernanceDialog"));
        GovernanceDialog->resize(670, 698);
        verticalLayout_2 = new QVBoxLayout(GovernanceDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelQRCodeTitle = new QLabel(GovernanceDialog);
        labelQRCodeTitle->setObjectName(QStringLiteral("labelQRCodeTitle"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelQRCodeTitle->setFont(font);
        labelQRCodeTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelQRCodeTitle);

        outUri = new QTextEdit(GovernanceDialog);
        outUri->setObjectName(QStringLiteral("outUri"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outUri->sizePolicy().hasHeightForWidth());
        outUri->setSizePolicy(sizePolicy);
        outUri->setMinimumSize(QSize(0, 50));
        outUri->setFrameShape(QFrame::NoFrame);
        outUri->setFrameShadow(QFrame::Plain);
        outUri->setTabChangesFocus(true);
        outUri->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(outUri);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(GovernanceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(GovernanceDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), GovernanceDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), GovernanceDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(GovernanceDialog);
    } // setupUi

    void retranslateUi(QDialog *GovernanceDialog)
    {
        labelQRCodeTitle->setText(QApplication::translate("GovernanceDialog", "Governance Object", Q_NULLPTR));
        Q_UNUSED(GovernanceDialog);
    } // retranslateUi

};

namespace Ui {
    class GovernanceDialog: public Ui_GovernanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOVERNANCEDIALOG_H
