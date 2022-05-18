#include <stdio.h>
#include <stdlib.h>
void main (void){
    int n = 10;
    char * p;
    p = malloc(n*sizeof(char));
    if(p == NULL){
        printf("Error al asignar la memoria\n");
    } else {
        printf("Se asigno efectivamente la memoria\n");
    }
}