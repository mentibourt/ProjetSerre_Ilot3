#ifndef BULLETINMETEO_H
#define BULLETINMETEO_H
#include "Observable.h"

class BulletinMeteo : public Observable {
public:
    BulletinMeteo();
    BulletinMeteo(const BulletinMeteo& orig);
    virtual ~BulletinMeteo();
    int getTemperature();
    int getVitesseVent();
    void setVitesseVent(int vitesse);
    void setTemperature(int temperature);
    bool setAlerteVent(bool alerte);
    
private:
    int temperature;
    int vitesseVent;
    bool alerteVent;

};

#endif /* BULLETINMETEO_H */

