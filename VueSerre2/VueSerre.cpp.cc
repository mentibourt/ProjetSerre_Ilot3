/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:54
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
    
}
void VueSerre::mettreAJour(){
    widget.temperature->setText("test1");
    widget.luminosite->setText("test2");
    widget.hygrometrie->setText("test3");
    widget.positionOuvrants->setText("test4");
}

VueSerre::~VueSerre() {
}
