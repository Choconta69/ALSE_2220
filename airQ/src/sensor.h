#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>


class Sensor{

private:
    double *_dato;
    int _tamano;
    int _limite;

public:
    Sensor(int tamano = 0, int limite = 100){
        _dato = new double[tamano];
        _tamano = tamano;
        _limite = limite;
        for (int i = 0 ; i < _tamano; i++) _dato[i] = 0. ;
    }
    Sensor(){ delete []_dato; }
    double leerDato(int i = 0){ if(i<_tamano) return _dato[i]; else return 0 ; }



    void actualizar(int inferior,int superior){
        for(int i=0; i < _tamano; i++)
            _dato[i] = ( inferior + rand() % ( superior - inferior ) );

    }
    std::string mostrarDatos(){
        std::stringstream a;
        for(int i =0; i< _tamano; i++)
            a << _dato[i] << "; ";

        a << std::endl;
        return a.str();
    }

    void acumularEn( int i = 0, double d = 0 ){ _dato[i] += d;}
    double promediarEntre( int i = 0, double n = 1 ){ return _dato[i] / n ;}




};



#endif // SENSOR_H
