/********************************************************************************
** Form generated from reading UI file 'VuePrincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VUEPRINCIPALE_H
#define UI_VUEPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VuePrincipale
{
public:

    void setupUi(QWidget *VuePrincipale)
    {
        if (VuePrincipale->objectName().isEmpty())
            VuePrincipale->setObjectName(QStringLiteral("VuePrincipale"));
        VuePrincipale->resize(400, 300);

        retranslateUi(VuePrincipale);

        QMetaObject::connectSlotsByName(VuePrincipale);
    } // setupUi

    void retranslateUi(QWidget *VuePrincipale)
    {
        VuePrincipale->setWindowTitle(QApplication::translate("VuePrincipale", "VuePrincipale", 0));
    } // retranslateUi

};

namespace Ui {
    class VuePrincipale: public Ui_VuePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VUEPRINCIPALE_H
