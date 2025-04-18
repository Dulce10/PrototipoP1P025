#ifndef EQUIPO_H
#define EQUIPO_H
#include <string>
#include <iostream>

class Equipo {
private:
    std::string nombre;
    int altos;
    int bajos;
    int promedios;

public:
    Equipo(std::string nombre);
    void actualizarEstadisticas(int golesAnotados, int golesRecibidos);
    void mostrarEstadisticas() const;
    std::string getNombre() const;
    int getPromedios() const;
};

#endif
