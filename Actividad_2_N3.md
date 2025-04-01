# Condicionales

1. Comprueba el codigo reemplazando los condicionales y sus valoress.

- Ejemplo # 1

    ![alt text](../photos/condicional_1.png)

- Ejemplo # 2

    ![alt text](../photos/condicional_2.png)

- Ejemplo # 3 

    ![alt text](../photos/condicional_3.png)

2. Ejercicio con switch

- Ejemplo # 1 LED

    ![alt text](../photos/codigo_LED.png)

- Ejemplos # 2 LED EN REPETICION

    ![alt text](../photos/programa_LED_repeticion.png)

3. Ejercicios Propuestos de practica.

- Condicional doble

>#include <stdio.h>

    int main() {
    int edad;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    return 0;
}

- if -else 

>#include <stdio.h>

    int main() {
    float calificacion;

    printf("Ingresa la calificación (0-5): ");
    scanf("%f", &calificacion);

    if (calificacion < 0 || calificacion > 5) {
        printf("Calificación fuera de rango.\n");
    } else if (calificacion >= 4.5) {
        printf("Sobresaliente.\n");
    } else if (calificacion >= 3.5) {
        printf("Notable.\n");
    } else if (calificacion >= 2.5) {
        printf("Aceptable.\n");
    } else if (calificacion >= 1.5) {
        printf("Insuficiente.\n");
    } else {
        printf("Muy deficiente.\n");
    }

    return 0;
}

- menu repetido

>#include <stdio.h>

    int main() {
    int opcion;

    do {
        printf("\n=== MENU ===\n");
        printf("1. PASTAS Opción 1\n");
        printf("2. CARNE Opción 2\n");
        printf("3. SOPA Opción 3\n");
        printf("4. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Seleccionaste las PASTA opción 1.\n");
                break;
            case 2:
                printf("Seleccionaste la CARNE opción 2.\n");
                break;
            case 3:
                printf("Seleccionaste la SOPA opción 3.\n");
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Inténtalo de nuevo.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}


