#ifndef LUZ_H
#define LUZ_H

#include "sensor.h"

class Int_l: public Sensor{
public:
    Int_l():Sensor(1){}
    double intensidad() {return leerDato(0);}
};

#endif // LUZ_H
