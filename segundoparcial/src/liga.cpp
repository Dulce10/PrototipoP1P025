#include "liga.h"
#include <iostream>

liga::liga( string nombre) : nombre(nombre), promedio(0), puntuacionAlta(0), puntuacionBaja(0)
{

}

}
void Equipo::mostrarEstadisticas() const {
    std::cout <<liga << nombre << " P: " << promedio << " A: " << puntuacionAlta
              << " B: " << puntuacionBaja << std::endl;
}

string Equipo::getNombre() const {
    return nombre;
}

int Equipo::getPuntos() const {
    return puntos;
}
