/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:40
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
    mettreAjour();
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAjour(){
    widget.temperature->setText("15");
    widget.hygrometrie->setText("22");
    widget.luminosite->setText("34");
    widget.positionOuvrants->setText("50");
}
