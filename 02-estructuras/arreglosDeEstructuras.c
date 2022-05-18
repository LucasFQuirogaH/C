#include <stdio.h>

struct perro
{
    /* data */
    char nombre[30];
    int edad;
    float peso;
} perros[3];

void main (void){
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese el nombre: ");
        scanf("%s" , &perros[i].nombre);
/*--------------------------------------------------------------*/
        printf("Ingrese la edad: ");
        scanf("%d" , &perros[i].edad);
/*--------------------------------------------------------------*/
        printf("Ingrese el peso: ");
        scanf("%f" , &perros[i].peso);
/*--------------------------------------------------------------*/
    }
/*--------------------------------------------------------------*/
        for (int i = 0; i < 3; i++)
    {
        printf("Su nombre es %s, su edad es %d y su peso %.2f\n" , perros[i].nombre , perros[i].edad , perros[i].peso); 
    }
    
}