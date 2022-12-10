#ifndef VELOCIDAD_H
#define VELOCIDAD_H

#include "sensor.h"

class Vel_ms: public Sensor{
public:
    Vel_ms():Sensor(1){}
    double veloci() {return leerDato(0);}
};

#endif // VELOCIDAD_H
