#ifndef LIGA_H
#define LIGA_H
#include <iostream>


class liga
{
    class Equipo {
        private:
            std::string nombre;
            int promedio;
            int puntuacionAlta;
            int puntuacionBaja;

        public:
            Equipo(std::string nombre);
            void mostrarEstadisticas() const;
            std::string getNombre() const;
            int getPuntos() const;
};

#endif // LIGA_H
