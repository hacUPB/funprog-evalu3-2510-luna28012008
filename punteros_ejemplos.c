#include <stdio.h>

int main(int argc, char const *argv[]){
    int y;              //variable entera
    int *x = NULL;      //puntero entero 
    y = 35;
    x = &y;             //le asigno a x la direccion de y 

    printf("direccion de memoria de y %p\n", &y);
    printf("contenido de x %p\n", x);
    printf("contenido y %d\n", y);


    //cambiar el contenido y usando el puntero
    (*x) = 699;         //desreferenciación
    printf("contenido y %d\n", y);

    y = (*x) * 2;

    return 0;
};