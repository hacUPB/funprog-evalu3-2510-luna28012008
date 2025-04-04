//contador del 1 a 10 (bucle while)

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        printf("iteracion %d\n", i);
        i++;
    }

    return 0;
}

//Menú Interactivo con do-while

#include <stdio.h>

int main() {
    int opcion, a, b, resultado;

    do {
        printf("\nMENU\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1 || opcion == 2) {
            printf("Ingresa dos números: ");
            scanf("%d", &a, &b);
        }

        switch (opcion) {
            case 1:
                resultado = a + b;
                printf("Resultado: %d\n", resultado);
                break;
            case 2:
                resultado = a - b;
                printf("Resultado: %d\n", resultado);
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida.\n");
        }
    } while (opcion != 3);

    return 0;
}

//Tablas de Multiplicar con for

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

//Búsqueda de Mínimo con for

#include <stdio.h>

int main() {
    int i, numero, minimo;

    printf("Ingresa 5 números:\n");
    scanf("%d", &minimo);  // Asumimos el primer número como mínimo

    for (i = 1; i < 5; i++) {
        scanf("%d", &numero);
        if (numero < minimo) {
            minimo = numero;
        }
    }

    printf("El número mínimo es: %d\n", minimo);

    return 0;
}

