#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <math.h>
#include "conversion.h"

int compare_temperatures(double temp_1, double temp_2){
    double error = 0.1f;
    if(fabs(temp_1 - temp_2) < error){
        return 1;
    }
    return 0;
}

int main(){
    printf("\n - - Inicio de pruebas C->F  - - \n");

    assert(compare_temperatures(farenheit(70),158)==1);
    assert(compare_temperatures(farenheit(50),122)==1);
    assert(compare_temperatures(farenheit(40),104)==1);

    printf("\n - - Inicio de pruebas F->C  - - \n");
    assert(compare_temperatures(celsius(158),70)==1); 
    assert(compare_temperatures(celsius(122),50)==1);
    assert(compare_temperatures(celsius(104),40)==1);
  
    printf("- - Fin de las pruebas - - ");
   
    return 0;
}