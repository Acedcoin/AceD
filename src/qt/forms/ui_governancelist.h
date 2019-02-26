/********************************************************************************
** Form generated from reading UI file 'governancelist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOVERNANCELIST_H
#define UI_GOVERNANCELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GovernanceList
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *filterLineEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QLabel *countGobjectText;
    QLabel *countGobjectLabel;
    QTableWidget *tableWidgetGobjects;
    QHBoxLayout *horizontalLayout;
    QPushButton *voteYesButton;
    QPushButton *voteNoButton;
    QPushButton *voteAbstainButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *GovernanceButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *UpdateButton;

    void setupUi(QWidget *GovernanceList)
    {
        if (GovernanceList->objectName().isEmpty())
            GovernanceList->setObjectName(QStringLiteral("GovernanceList"));
        GovernanceList->resize(967, 371);
        verticalLayout = new QVBoxLayout(GovernanceList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(GovernanceList);
        updateNote->setObjectName(QStringLiteral("updateNote"));

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout->addLayout(horizontalLayout_note);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(GovernanceList);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        filterLineEdit = new QLineEdit(GovernanceList);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        horizontalLayout_3->addWidget(filterLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        countGobjectText = new QLabel(GovernanceList);
        countGobjectText->setObjectName(QStringLiteral("countGobjectText"));

        horizontalLayout_3->addWidget(countGobjectText);

        countGobjectLabel = new QLabel(GovernanceList);
        countGobjectLabel->setObjectName(QStringLiteral("countGobjectLabel"));

        horizontalLayout_3->addWidget(countGobjectLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        tableWidgetGobjects = new QTableWidget(GovernanceList);
        if (tableWidgetGobjects->columnCount() < 8)
            tableWidgetGobjects->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetGobjects->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidgetGobjects->setObjectName(QStringLiteral("tableWidgetGobjects"));
        tableWidgetGobjects->setMinimumSize(QSize(695, 0));
        tableWidgetGobjects->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetGobjects->setAlternatingRowColors(true);
        tableWidgetGobjects->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetGobjects->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetGobjects->setSortingEnabled(true);
        tableWidgetGobjects->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidgetGobjects);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        voteYesButton = new QPushButton(GovernanceList);
        voteYesButton->setObjectName(QStringLiteral("voteYesButton"));

        horizontalLayout->addWidget(voteYesButton);

        voteNoButton = new QPushButton(GovernanceList);
        voteNoButton->setObjectName(QStringLiteral("voteNoButton"));

        horizontalLayout->addWidget(voteNoButton);

        voteAbstainButton = new QPushButton(GovernanceList);
        voteAbstainButton->setObjectName(QStringLiteral("voteAbstainButton"));

        horizontalLayout->addWidget(voteAbstainButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        GovernanceButton = new QPushButton(GovernanceList);
        GovernanceButton->setObjectName(QStringLiteral("GovernanceButton"));

        horizontalLayout_2->addWidget(GovernanceButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        UpdateButton = new QPushButton(GovernanceList);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_2->addWidget(UpdateButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(GovernanceList);

        QMetaObject::connectSlotsByName(GovernanceList);
    } // setupUi

    void retranslateUi(QWidget *GovernanceList)
    {
        GovernanceList->setWindowTitle(QApplication::translate("GovernanceList", "Form", Q_NULLPTR));
        updateNote->setText(QApplication::translate("GovernanceList", "<html><head/><body><p>Note: Governance objects in your local wallet can be potentially incorrect. Always wait for wallet sync and additional data before voting on any proposal. </p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("GovernanceList", "Search:", Q_NULLPTR));
        countGobjectText->setText(QApplication::translate("GovernanceList", "Number of proposals:", Q_NULLPTR));
        countGobjectLabel->setText(QApplication::translate("GovernanceList", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetGobjects->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GovernanceList", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetGobjects->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GovernanceList", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetGobjects->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GovernanceList", "Url", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetGobjects->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GovernanceList", "Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetGobjects->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GovernanceList", "Yes", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetGobjects->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("GovernanceList", "No", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetGobjects->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("GovernanceList", "Absolute Yes", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetGobjects->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("GovernanceList", "Funding", Q_NULLPTR));
        voteYesButton->setText(QApplication::translate("GovernanceList", "Vote Yes", Q_NULLPTR));
        voteNoButton->setText(QApplication::translate("GovernanceList", "Vote No", Q_NULLPTR));
        voteAbstainButton->setText(QApplication::translate("GovernanceList", "Vote Abstain", Q_NULLPTR));
        GovernanceButton->setText(QApplication::translate("GovernanceList", "Show Proposal Information", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("GovernanceList", "Update Governance", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GovernanceList: public Ui_GovernanceList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOVERNANCELIST_H
