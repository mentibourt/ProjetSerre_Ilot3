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
    unemeteo = new VueMeteo();
    widget.setupUi(this);
    widget.meteo->addWidget(unemeteo);
    
    uneserre[0] = new VueSerre();
    widget.setupUi(this);
    widget.serre->addWidget(uneserre[0]);
    
    uneserre[1]= new VueSerre(); 
    widget.serre->addWidget(uneserre[1]);
    
    uneserre[2] = new VueSerre();
    widget.serre->addWidget(uneserre[2]);
    
    
    
    
    
}

   
    


VuePrincipale::~VuePrincipale() {
}
