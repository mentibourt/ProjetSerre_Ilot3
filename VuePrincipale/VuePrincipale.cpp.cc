/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:42
 */

#include "VuePrincipale.h"
#include "VueMeteo.h"

VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    
    
}
void VuePrincipale::addWidget(){
auto layout = new QHBoxLayout;
    setLayout(layout);
   
        auto meteo = new QWidget;
        layout->addWidget(meteo);
    
}

VuePrincipale::~VuePrincipale() {
}
