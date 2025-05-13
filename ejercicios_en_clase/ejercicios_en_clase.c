
//ejemplo #1

int main() {
    int ronda = 0;

    while (ronda <= 100) {
        printf("vamos por la ronda: %d\n", ronda);
        ronda++;
    }

    return 0;

}

//ejemplo #2

int main() {
    for (numero = 99;numero >= -199;numero -= 2) {
    printf("Numero impar: %d\n", numero);
    }
     return 0;
}

//ejemplos #3

int main() {
    int multiplos = 0;

    while (multiplos <= 1000) {
        printf("multiplos de 7: %d\n", multiplos);
        multiplos += 7;
    }
    return 0;
}

//ejemplos #4

int main() {
    int multiplos = 0;

    while (multiplos <= 1000) {
        if (multiplos %7 == 0|| multiplos %9 == 0){  // i %7 si son multiplos
        printf("multiplos de 7 y 9: %d\n", multiplos);
        };

        multiplos ++; //++ para ir incrementando de uno en uno 
    }
    return 0;
}


//ejemplos #5

int main() {
    int num1, num2;

     printf(" danos el número que quieras evaluar si es numero de 3 y 5, debe ser un numero sin decimales:");
     scanf("%d", &num1 );

    while (num1 >= num2) {
        if (num1 %3 == 0 || num1 %5 == 0){
            printf("buzzbiss");
        }else if(num1 %3 == 0){
            printf("biss");
        }else if(num1 %5 == 0){
            printf("buzz");
        }else{
            printf("no es multiplo de nada, tu numero es: %d\n", num1);
        }
    }

    return 0;
}

//ejercicio # 6

#include <stdio.h>

int main(int argc, char const *argv[])
{ 
    int N;
    printf("Ingrese el número que desea imprimir la tabla de multiplicar");
    scanf("%d", &N);

    for(int Multiplo= 1; Multiplo <= 10; Multiplo++){
        printf("%d x %d = %d\n", N, Multiplo, N * Multiplo);
    }    
return 0;
}


//ejemplo # 7 

int main(){
    int numero;
    printf("ingrese el numero hasta el que quiere imprimir la secuencia: \n" );
    scanf("%d", &numero);


    for(int i = 1; i <= numero; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Para mejorar la presentación en la consola

    return 0;
};

// ejercicio # 8
int main(){
    int numero;
    printf("ingrese el numero hasta el que quiere imprimir la secuencia: \n" );
    scanf("%d", &numero);


    for(int i = 1; i <= numero; i++) {

        for(int j =1, j<= numero, j ++){
        printf("%d ", i);}
    }
    printf("\n"); 


    return 0;
};

//ejercicio # 9
int main(){
    int numero;
    printf("ingrese el numero hasta el que quiere imprimir la secuencia: \n" );
    scanf("%d", &numero);


    for(int i = 1; i <= numero; i++) {

        for(int j =1, j<= i, j ++){
        printf("%d ", j);};
        for(int n =1, n<= j, n --){
        printf("%d ", n);}
    }
    printf("\n"); 


    return 0;
};



