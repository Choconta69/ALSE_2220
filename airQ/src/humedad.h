#ifndef HUMEDAD_H
#define HUMEDAD_H

#include "sensor.h"

class Hum_h: public Sensor{
public:
    Hum_h():Sensor(1){}
    double hum() {return leerDato(0);}
};

#endif // HUMEDAD_H
