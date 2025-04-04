

#include <stdio.h>
#include <stddef.h>


int main() {
    int opcion, num1, num2;
    do{

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("\nSeleccione una operación:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. salir\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Resultado: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Resultado: %d\n", num1 / num2);
            else
                printf("No se puede dividir por cero.\n");
            break;
        default:
            printf("Opción inválida.\n");
    }
} while (opcion != 5);
printf("Adiós.\n");

    return 0;
}
