#include <stdio.h>
#include <math.h>
float a=0;
float b=0;
float c=0;
float r=0;
float h=0;
int load=0;

float obl_obj_prost(float a, float b, float c){
    return(a*b*c);
}
float obl_obj_walca(float r, float h) {
	return(M_PI*r*r*h);
}
void Obliczanie_objetosci_prostopadloscianu(){
    printf("Podaj dlugosc prostopadloscianu:");
    scanf("%f", &a);

    printf("Podaj szerokosc prostopadloscianu:");
    scanf("%f", &b);

    printf("Podaj wysokosc prostopadloscianu:");
    scanf("%f", &c);
    printf("Objetosc prostopadloscianu wynosi: %f", obl_obj_prost(a, b, c));
}
void Obliczanie_objetosci_walca(){
    printf("\nPodaj promien walca:");
    scanf("%f", &r);

    printf("Podaj wysokosc walca:");
    scanf("%f", &h);
    printf("Objetosc walca wynosi: %f", obl_obj_walca(r, h));
}

int main(){
    Obliczanie_objetosci_prostopadloscianu();
    Obliczanie_objetosci_walca();
    return 0;
}
