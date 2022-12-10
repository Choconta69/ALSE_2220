
#include "sensor.h"
#include "nitro.h"
#include "carbon.h"
#include "temp.h"
#include "temperatura.h"
#include "humedad.h"
#include "velocidad.h"
#include "direccion.h"
#include "precipitacion.h"
#include "luz.h"
#include <vector>

#include <iostream>
#include <vector>
#include <algorithm>

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>
#include <sstream>
using namespace std;



void delay(int s){
     int micro_seconds = 1000000 * s;

           // Storing start time
           clock_t start_time = clock();

           // looping till required time is not achieved
           while (clock() < start_time + micro_seconds);

       }



int main(){

    /*sqlite3 *db;
        string sqlstr,Usuario,Pass;
        stringstream sql;
        int rc,rb;
        char *zErrMsg = 0;

        //Solicitud de usuario y contraseña al usuario

        cout << "Ingrese su username";
        cin >> Usuario;
        cout << "Ingrese su contraseña";
        cin >> Pass;

        rc = sqlite3_open("Proyecto.db", &db);
        if( rc != 0 ) {
           fprintf(stderr, "No se pudo abrir: %s\n", sqlite3_errmsg(db));
           return(1);
        } else {
           fprintf(stdout, "Base de datos creada\n");
        }



        sqlstr = "CREATE TABLE USUARIO (Username TEXT PRIMARY KEY NOT NULL ,Password TEXT NOT NULL);"\
                 "CREATE TABLE TEMPERATURA (Promedio REAL NOT NULL, usuario	TEXT NOT NULL, Minimo REAL NOT NULL, Maximo REAL NOT NULL,"\
                             "FOREIGN KEY(usuario) REFERENCES USUARIO(usuario));"\
                 "CREATE TABLE HUMEDAD(Promedio REAL NOT NULL, usuario	TEXT NOT NULL, Minimo REAL NOT NULL, Maximo REAL NOT NULL,"\
                             "FOREIGN KEY(usuario) REFERENCES USUARIO(usuario));"\
                 "CREATE TABLE VELOCIDAD(Promedio REAL NOT NULL, usuario	TEXT NOT NULL, Minimo REAL NOT NULL, Maximo REAL NOT NULL,"\
                             "FOREIGN KEY(usuario) REFERENCES USUARIO(usuario));"\
                 "CREATE TABLE DIRECCION(Promedio REAL NOT NULL, usuario	TEXT NOT NULL, Minimo REAL NOT NULL, Maximo REAL NOT NULL,"\
                             "FOREIGN KEY(usuario) REFERENCES USUARIO(usuario));"\
                 "CREATE TABLE PRECIPITACION(Promedio REAL NOT NULL, usuario	TEXT NOT NULL, Minimo REAL NOT NULL, Maximo REAL NOT NULL,"\
                             "FOREIGN KEY(usuario) REFERENCES USUARIO(usuario));"\
                 "CREATE TABLE LUMINOSIDAD(Promedio REAL NOT NULL, usuario	TEXT NOT NULL, Minimo REAL NOT NULL, Maximo REAL NOT NULL,"\
                             "FOREIGN KEY(usuario) REFERENCES USUARIO(usuario));";


        //Creacion de tablas en la base de datos llamada Proyecto.db
        rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

        if( rc != SQLITE_OK ){
              fprintf(stderr, "SQL error: %s\n", zErrMsg);
              sqlite3_free(zErrMsg);
              return (2);
           } else {
              fprintf(stdout, "Tablas creadas correctamente\n");
           }
        sqlite3_close(db);

        // Aqui iria el main para sacar promedio maximo y minimo!!!!!!*/


    Nitro n;
    Carbon c;
    Temp_Hum th;
    Tem_ce tc;
    Hum_h hu;
    Vel_ms vms;
    Dire_n dir;
    Preci_m pre;
    Int_l il;


    std::vector<Nitro> _nvec;
    std::vector<Carbon> _cvec;
    std::vector<Temp_Hum> _thvec;
    std::vector<Tem_ce> _tcvec;
    std::vector<Hum_h> _huvec;
    std::vector<Vel_ms> _vmsvec;
    std::vector<Dire_n> _dirvec;
    std::vector<Preci_m> _prevec;
    std::vector<Int_l> _ilvec;


    int contador = 1;

    double p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,pt;
    double min1,min2,min3,min4,min5,min6,max1,max2,max3,max4,max5,max6;

    do{




        n.actualizar(10,40);
        // Ingresar al vector
        _nvec.push_back( n );


        if( contador % 4 ){
            c.actualizar(10,40);
            // Ingresar al vector
            _cvec.push_back( c );
        }

        th.actualizar(-10,45);
        // Ingresar al vector
        _thvec.push_back( th );

        tc.actualizar(-10,45);
        // Ingresar al vector
        _tcvec.push_back( tc );

        hu.actualizar(0,100);
        // Ingresar al vector
        _huvec.push_back( hu );

        vms.actualizar(0,40);
        // Ingresar al vector
        _vmsvec.push_back( vms );

        dir.actualizar(-180,180);
        // Ingresar al vector
        _dirvec.push_back( dir );

        pre.actualizar(0,50);
        // Ingresar al vector
        _prevec.push_back( pre );

        il.actualizar(0,200);
        // Ingresar al vector
        _ilvec.push_back( il );





        contador++;

        if( contador % 61){
            // Calcular promedios e imprimir

            p1=p2=p3=p4=p5=p6=p7=p8=p9=p10=p11=p12=p13=pt=0;
            min1=min2=min3=min4=min5=min6=max1=max2=max3=max4=max5=max6=0;
            for(size_t  i= 0; i< _nvec.size(); i++ ){
                p1 += _nvec[i].NiO();
                p2 += _nvec[i].NiO2();

                p1 = p1/_nvec.size();
                p2 = p2/_nvec.size();


            }
            //std::cout<< "promedio de NIO: "<< p1 << " promedio de NIO2: " << p2 <<"  " <<std::endl;

            for(size_t  i= 0; i< _cvec.size(); i++ ){
                p3 += _cvec[i].C_Measure();
                p4 += _cvec[i].CO2_Measure();
                p5 += _cvec[i].CO_Measure();

                p3 = p3/_cvec.size();
                p4 = p4/_cvec.size();
                p5 = p5/_cvec.size();

            }
            //std::cout<< "promedio de C: "<< p3 << " promedio de CO2: " << p4 << " promedio de CO: " << p5 << " " <<std::endl;

            for(size_t  i= 0; i< _thvec.size(); i++ ){
                p6 += _thvec[i].temperatura();
                p7 += _thvec[i].humedad();

                p6 = p6/_thvec.size();
                p7 = p7/_thvec.size();

            }
            //std::cout<< "promedio de temperatura: "<< p6 << " promedio de humedad: " << p7 <<"  " <<std::endl;



            for(size_t  i= 0; i< _tcvec.size(); i++ ){

                p8 += _tcvec[i].tempe();

                p8 = p8/_tcvec.size();









            }


            std::cout<< "min:" << min1 <<"  promedio de temperatura en centrigrados: "<< p8  << " max  "  <<   max1 <<std::endl;

            for(size_t  i= 0; i< _huvec.size(); i++ ){
                p9 += _huvec[i].hum();

                p9 = p9/_huvec.size();


                }


            //std::cout<< "promedio de humedad: "<< p9 << "  " <<std::endl;

            for(size_t  i= 0; i< _vmsvec.size(); i++ ){
                p10 += _vmsvec[i].veloci();

                p10 = p10/_vmsvec.size();


            }
            //std::cout<< "promedio de velocidad: "<< p10 << "  " <<std::endl;

            for(size_t  i= 0; i< _dirvec.size(); i++ ){
                p11 += _dirvec[i].direccion();

                p11 = p11/_dirvec.size();


            }
            //std::cout<< "promedio de direccion: "<< p11 << "  " <<std::endl;

            for(size_t  i= 0; i< _prevec.size(); i++ ){
                p12 += _prevec[i].precipitacion();

                p12 = p12/_prevec.size();


            }
            //std::cout<< "promedio de precipitacion: "<< p12 << "  " <<std::endl;

            for(size_t  i= 0; i< _ilvec.size(); i++ ){
                p13 += _ilvec[i].intensidad();

                p13 = p13/_ilvec.size();


            }
            //std::cout<< "promedio de intensidad de la luz: "<< p13 << "  " <<std::endl;



            contador = 1;

            _nvec.clear();
            _cvec.clear();
            _thvec.clear();
            _tcvec.clear();
            _huvec.clear();
            _vmsvec.clear();
            _dirvec.clear();
            _prevec.clear();
            _ilvec.clear();

        }


        delay ( 3 );

    }while(true);

    /*rc = sqlite3_open("Proyecto.db", &db);

          if( rc ) {
             fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
             return(0);
          } else {
             fprintf(stderr, "Base de datos abierta correctamente\n");
          }


          sql << "INSERT INTO USUARIO(Username,Password)VALUES('" << Usuario << "','" << Pass << "');"
                  << "INSERT INTO TEMPERATURA(Promedio,usuario,Minimo,Maximo)VALUES('" << p8 << "','" << Usuario << "','" << min1 << "','" << max1 << "');"
                     << "INSERT INTO HUMEDAD(Promedio,usuario,Minimo,Maximo)VALUES('" << p9 << "','" << Usuario << "','" << min2 << "','" << max2 << "');"
                        << "INSERT INTO VELOCIDAD(Promedio,usuario,Minimo,Maximo)VALUES('" << p10 << "','" << Usuario << "','" << min3 << "','" << max3 << "');"
                           << "INSERT INTO DIRECCION(Promedio,usuario,Minimo,Maximo)VALUES('" << p11 << "','" << Usuario << "','" << min4 << "','" << max4 << "');"
                              << "INSERT INTO PRECIPITACION(Promedio,usuario,Minimo,Maximo)VALUES('" << p12 << "','" << Usuario << "','" << min5 << "','" << max5 << "');"
                                 << "INSERT INTO LUMINOSIDAD(Promedio,usuario,Minimo,Maximo)VALUES('" << p13 << "','" << Usuario << "','" << min6 << "','" << max6 << "');";

          rb = sqlite3_exec(db, sql.str().c_str(), 0, 0, &zErrMsg);

          if( rb != SQLITE_OK ) {
             fprintf(stderr, "SQL error: %s\n", zErrMsg);
             sqlite3_free(zErrMsg);
          } else {
             fprintf(stdout, "Datos ingresados correctamente\n");
          }

          sqlite3_close(db);*/

    return 0;
}


