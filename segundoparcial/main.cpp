#include <iostream>
#include "puntuacion.h"

using namespace std;

int main()
{
    Puntuacion puntuacion;

    // Agregar equipos (puedes ingresar los nombres como antes)
    puntuacion.ingresarEquipos();

    // Llenar resultados y calcular estad�sticas
    puntuacion.llenarResultados();
    puntuacion.calcularEstadisticas();

    // Mostrar los resultados de los partidos
    puntuacion.mostrarResultadosPartidos();

    // Mostrar la tabla de posiciones con la l�nea dibujada
    puntuacion.mostrarTablaPosiciones();

}
