#include <stdio.h>
#include <math>

//función que recibe dos punteros y realiza operaciones con ellos
void operacion_punteros(float *, int *);  //esto se llama el prototipo de la funcion

int main(int argc, char const *argv[])
{
    float cubo;
    int factorial;
    operacion_punteros(&cubo, &factorial);

    return 0;
}

//definicion de la funcion, osea que hace

void operacion_punteros(float *var1, int *var2)
{
    //En la variable a la que apunta var 1 voy a guaradar el cubo de un numero que ingresa el usuario y en la variable
    // a la que apunta var 2 el factorial

    int dato;
    (*var1) = 999;
    printf("ingresa un dato: \n");
    scanf(%d, &dato);
    pow(dato, 3);  //asi se calcula la potencia primero base y el segundo potencia (funcion de la libreria matematica)
    (*var1) = pow(dato,3); //desreferenciacion
    (*var2) = fact(dato); //guarda en la variable factorial = fact(dato)

}

//la segunda

void operacion_punteros(float *, double *);

int main(int argc, char const *argv[])
{
    float cubo;
    double coseno;
    operacion_punteros(&cubo, &coseno);
    printf("cubo = %f\n", cubo);
    printf("coseno = %lf\n", coseno);

    return 0;
}

//definicion de la funcion, osea que hace

void operacion_punteros(float *var1, double *var2)
{
    //En la variable a la que apunta var 1 voy a guaradar el cubo de un numero que ingresa el usuario y en la variable
    // a la que apunta var 2 el factorial

    float dato;
    (*var1) = 999;
    printf("ingresa un dato: \n");
    scanf(%f, &dato);
    pow(dato, 3);  //asi se calcula la potencia primero base y el segundo potencia (funcion de la libreria matematica)
    (*var1) = pow(dato,3); //desreferenciacion
    (*var2) = cos(dato); //guarda en la variable factorial = fact(dato)

}