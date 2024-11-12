#include <stdio.h>
#include "cs50.h"

float kaka(float x, int p);

int main(void){
      float regular = get_float("the regular price : ");
      int pourcent = get_int("the pourcentage is : ");
      float result = kaka(regular, pourcent);
      printf("%.1f\n", result);
}

float kaka(float x, int p){
      return x * (100 - p)/100;
}