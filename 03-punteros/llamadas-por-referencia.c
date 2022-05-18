// Llamada de funciones por referencia
/*
#include <stdio.h>

int cubo(int num);

int cubo (int num){
    return num * num;
}


void main (void){
    int num = 5;
    printf("Valor viejo %i\n" , num);
    num = cubo(num);
    printf("Nuevo valor %i\n" , num);
}
*/

//---------------------------------------------------------------------------------------------------------------------------
// Llamada de funciones por referencia

#include <stdio.h>

int cubo(int *p);

int cubo (int *p){
    *p = *p * *p;
    return *p;
}


void main (void){
    int num = 5;
    printf("Valor viejo %i\n" , num);
    num = cubo(&num); // *p = &num
    printf("Nuevo valor %i\n" , num);
}

