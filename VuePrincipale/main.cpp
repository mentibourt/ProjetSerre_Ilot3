/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:32
 */

#include <QApplication>
#include "VuePrincipale.h"
#include "VueSerre.h"
#include "VueMeteo.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);
    
    QApplication app(argc, argv);
    // create and show your widgets here
    VuePrincipale *maVuePrincipale= new VuePrincipale();
    maVuePrincipale -> show();
    
    VueMeteo *maVueMeteo = new VueMeteo();
    maVueMeteo->show();
    
    
    
    return app.exec();
}
