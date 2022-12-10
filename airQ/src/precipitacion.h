#ifndef PRECIPITACION_H
#define PRECIPITACION_H

#include "sensor.h"

class Preci_m: public Sensor{
public:
    Preci_m():Sensor(1){}
    double precipitacion() {return leerDato(0);}
};

#endif // PRECIPITACION_H
