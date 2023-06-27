#include <stdio.h>
#include "conversion.h"

//INLCUYE EL PUNTO DE CREDITO EXTRA
void PrintFila(double temp, char type_temp) {
    if (type_temp == 'c')
        printf("%.1f°C || %.1f°F \n", temp, celsius(temp));
    else if (type_temp == 'f')
        printf("%.1f°F || %.1f°C \n", temp, farenheit(temp));
}

void PrintFilas(double t_min, double t_max, double increment, char type_temp) {
    for (double temp_actual = t_min; temp_actual <= t_max; temp_actual += increment) {
        PrintFila(temp_actual, type_temp);
    }
}

void PrintTablaCelsius(double t_min, double t_max, double increment) {
    printf("Inicia tabla de Celsius -> Farenheit\n");
    PrintFilas(t_min, t_max, increment, 'c');
}

void PrintTablaFahrenheit(double t_min, double t_max, double increment) {
    printf("Inicia tabla de Farenheit -> Celsius\n");
    PrintFilas(t_min, t_max, increment, 'f');
}

void PrintTablas(double t_min_c, double t_max_c, double increment_c, double t_min_f, double t_max_f, double increment_f) {
    PrintTablaCelsius(t_min_c, t_max_c, increment_c);
    printf("\n============================\n");
    PrintTablaFahrenheit(t_min_f, t_max_f, increment_f);
}

int main(){
    printf("Inicio tablas de conversion\n");
    PrintTablas(0, 45, 5, 32, 113, 9);
    return 0;
}