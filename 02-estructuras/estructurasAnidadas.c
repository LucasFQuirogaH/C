#include <stdio.h>
#define largo 3
struct duenio{
    char nombre[30];
    char direccion[30];
};

struct perro{
    char nombre[30];
    int edad;
    float peso;
    struct duenio duenio1;
} perros[largo];

void main (void){
    for (int i = 0; i < largo; i++)
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
        printf("Ingrese el nombre del dueño: ");
        scanf("%s" , &perros[i].duenio1.nombre);
/*--------------------------------------------------------------*/
        printf("Ingrese la direccion del dueño: ");
        scanf("%s" , &perros[i].duenio1.direccion);
    }
/*--------------------------------------------------------------*/
        for (int i = 0; i < largo; i++)
    {
        printf("Su nombre es %s, su edad es %d y su peso %.2f\n" , perros[i].nombre , perros[i].edad , perros[i].peso); 
        printf("El nombre del dueño es: %s\n" , perros[i].duenio1.nombre);
        printf("Vive en: %s\n" , perros[i].duenio1.direccion);
    }
    
}