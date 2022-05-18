// Includes ---------------------------------------------------------------
#include <stdio.h>

// Main -------------------------------------------------------------------
void main(void){
    int a = 16;
    int *p = &a; // Asi se asocia pero no significa que *p es igual a &a, pues p guarda direccion y &a es la direcion de a.
    printf("%i\n" , a);
    printf("%i\n" , *p);
    printf("%i\n" , &a);
    printf("%i" , p);
}

//p == &a