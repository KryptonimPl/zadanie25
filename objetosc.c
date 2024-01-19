#include <stdio.h>
#include <math.h>
float a=0;
float b=0;
float c=0;

float obl_obj_prost(float a, float b, float c){
    return(a*b*c);
}

int main(){
    printf("Podaj dlugosc prostopadloscianu:");
    scanf("%f", &a);

    printf("Podaj szerokosc prostopadloscianu:");
    scanf("%f", &b);

    printf("Podaj wysokosc prostopadloscianu:");
    scanf("%f", &c);
    printf("Objetosc prostopadloscianu wynosi: %f", obl_obj_prost(a, b, c));
return 0;
}
