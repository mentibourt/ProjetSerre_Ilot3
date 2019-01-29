/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfoClimat.h
 * Author: snir2g1
 *
 * Created on 15 janvier 2019, 17:06
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H
#include "Observable.h"


class InfoClimat : public Observable{
public:
    InfoClimat();
    InfoClimat(const InfoClimat& orig);
    virtual ~InfoClimat();
    int hydrometrie();
    int temperature();
    int positionOuvrants();
    int luminosite();
    int date();
private:
    

};

#endif /* INFOCLIMAT_H */

