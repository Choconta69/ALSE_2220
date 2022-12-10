#ifndef DIRECCION_H
#define DIRECCION_H

#include "sensor.h"

class Dire_n: public Sensor{
public:
    Dire_n():Sensor(1){}
    double direccion() {return leerDato(0);}
};

#endif // DIRECCION_H
