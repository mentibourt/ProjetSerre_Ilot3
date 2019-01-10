/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 17:38
 */

#include <QApplication>
#include "VueMeteo.h"

int main(int argc, char *argv[]) {
    

    QApplication app(argc, argv);

    VueMeteo maVueMeteo;
     maVueMeteo.mettreAJour();
    maVueMeteo.show();
   

    return app.exec();
}
