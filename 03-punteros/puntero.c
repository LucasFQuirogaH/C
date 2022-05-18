#include <stdio.h>
void main (void){
    int a = 15;
    int *apt =&a; // Asi se declara y se asigna directo los valores

    printf("%d" , *apt); // Asi se pasa el valor
    printf("\n");
    printf("%p" , *apt); // Asi te da el valor en hexadecimal
    printf("\n");
    printf("%p" , apt); // Asi te da la direccion de memoria en hexadecimal
}