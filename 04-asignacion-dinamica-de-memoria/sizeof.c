// Includes ---------------------------------------------------------------
#include <stdio.h>
// Declaraciones ----------------------------------------------------------
size_t getSize(float *ptr);
// Main -------------------------------------------------------------------
void main(void){
    float array[20];
    printf("el numero de bytes del arreglio es %lu\n" , sizeof(array));
    printf("El numero de bytes devuelto por getsize es: %lu" , getSize(array));
}
// Definiciones  ----------------------------------------------------------
size_t getSize(float *ptr){
    return sizeof(*ptr);
}
