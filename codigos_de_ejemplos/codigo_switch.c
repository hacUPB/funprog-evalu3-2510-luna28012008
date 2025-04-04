#include <stdio.h>

int main() {
    int opcion;

    printf("=== CONTROL DE LED ===\n");
    printf("1. Encender LED\n");
    printf("2. Apagar LED\n");
    printf("3. Mostrar estado del LED\n");
    printf("4. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("LED encendido.\n");
            break;
        case 2:
            printf("LED apagado.\n");
            break;
        case 3:
            printf("Mostrando estado del LED...\n");
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción inválida.\n");
            break;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int opcion;
    int led_estado = 0;  

    do {
        printf("\n=== CONTROL DE LED ===\n");
        printf("1. Encender LED\n");
        printf("2. Apagar LED\n");
        printf("3. Mostrar estado del LED\n");
        printf("4. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                led_estado = 1;
                printf("LED encendido.\n");
                break;
            case 2:
                led_estado = 0;
                printf("LED apagado.\n");
                break;
            case 3:
                if (led_estado)
                    printf("El LED está ENCENDIDO.\n");
                else
                    printf("El LED está APAGADO.\n");
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
