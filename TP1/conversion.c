#include "conversion.h"

double farenheit(double temp_c){
  return ((((temp_c * 9) / 5)) + 32);
}

double celsius(double temp_f){
  return (((temp_f - 32) * 5) / 9);
}