#include "Equipo.h"

Equipo::Equipo(std::string nombre) : nombre(nombre), altos(0),
    bajos(0), promedios(0) {}


void Equipo::mostrarEstadisticas() const {
    std::cout << nombre << "PA: " << altos << " PB: " << bajos
              << " P: " << promedios << std::endl;
}

std::string Equipo::getNombre() const {
    return nombre;
}

int Equipo::getPromedios() const {
    return promedios;
}
