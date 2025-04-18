#ifndef PUNTUACION_H
#define PUNTUACION_H

#include "Equipo.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>

#define NUMERO_EQUIPOS 3  // Constante de n�mero de equipos

class Puntuacion {
private:
    std::vector<Equipo> equipos;    // Lista de equipos
    int resultados[NUMERO_EQUIPOS][NUMERO_EQUIPOS][2];  // Resultados partidos
    int estadisticas[NUMERO_EQUIPOS][7];  // Estad�sticas de los equipos

public:
    Puntuacion();
    void agregarEquipo(const std::string& nombre);
    void ingresarEquipos();
    void llenarResultados();
    void calcularEstadisticas();
    void mostrarResultadosPartidos() const;
    void mostrarTablaPosiciones() const;

    // Funci�n para dibujar la l�nea en la tabla
    void dibujarLinea() const;
};

#endif
