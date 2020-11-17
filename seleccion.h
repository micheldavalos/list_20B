#ifndef SELECCION_H
#define SELECCION_H

#include "jugador.h"
#include <list>

class Seleccion
{
public:
    Seleccion();
    Seleccion(const string &nombre):nombre(nombre){}

    void setNombre(const string &nombre);
    string getNombre();

    void agregarFinal(const Jugador &j);
    void agregarInicio(const Jugador &j);
    void print();

    // eliminar
    void eliminarNombre(const string &nombre);
    void eliminarGoles();
    void eliminarGoles(size_t goles);

    // ordenar
    void ordenarNombre();
    void ordenarNumero();
    void ordenarGoles();

private:
    string nombre;
    list<Jugador> jugadores;
};

#endif