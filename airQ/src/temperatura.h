#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include "sensor.h"

class Tem_ce: public Sensor{
public:
    Tem_ce():Sensor(1){}
    double tempe() {return leerDato(0);}
};

#endif // TEMPERATURA_H
