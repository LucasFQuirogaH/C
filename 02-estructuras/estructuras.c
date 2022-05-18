#include <stdio.h>

struct perro
{
    /* data */
    char nombre[30];
    int edad;
    float peso;
} perro1 = {"peco" , 6 , 12.3};
perro2= {"renata" , 12 , 15};

void main (void){
    printf("El nombre de mi perro es %s" , perro1.nombre);
    /*---------------------------------------------------------------*/
}