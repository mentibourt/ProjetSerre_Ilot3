/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:40
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H
#include "../ClasseMetier/InfoClimat.h"
#include "ui_VueSerre.h"

class VueSerre : public QWidget {
    Q_OBJECT
public:
    VueSerre();
    VueSerre(InfoClimat* uneInfosClimat);
    virtual ~VueSerre();
    void mettreAjour();
private:
    Ui::VueSerre widget;
    InfoClimat *uneInfoClimat;
};

#endif /* _VUESERRE_H */
