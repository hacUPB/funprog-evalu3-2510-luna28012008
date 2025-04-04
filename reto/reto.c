#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Resistencia de los materiales
// se definen las constantes con un #define porque así es mas eficiente y se reconoce mejor por el compilador como una costante
#define RESISTIVIDAD_ORO 2.44e-8                  
#define COEFICIENTE_TEMPERATURA_ORO 0.0034
#define RESISTIVIDAD_ALUMINIO 2.82e-8
#define COEFICIENTE_TEMPERATURA_ALUMINIO 0.004
#define RESISTIVIDAD_COBRE 1.68e-8
#define COEFICIENTE_TEMPERATURA_COBRE 0.0039
// estas constantes se calcularon teniendo en cuenta la temperatura en 20 que pidio

// Prototipos de funciones
void menu_principal();
void menu_ley_ohm();
void menu_factor_potencia();
void menu_resistencia_conductor();
void menu_resistencia_led();

// Función para Ley de Ohm
void menu_ley_ohm() {
    float voltaje, corriente, resistencia;
    int opcion;

    //sub-menú de que quiere calcular
    printf("\nHas seleccionado Ley de Ohm.\n");
    printf("1. Calcular Voltaje\n");
    printf("2. Calcular Corriente\n");
    printf("3. Calcular Resistencia\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Ingresa la corriente en amperios: ");
            scanf("%f", &corriente);
            printf("Ingresa la resistencia en ohmios: ");
            scanf("%f", &resistencia);
            voltaje = corriente * resistencia;
            printf("Voltaje: %.2f V\n", voltaje);
            break;
        case 2:
            printf("Ingresa el voltaje en voltios: ");
            scanf("%f", &voltaje);
            printf("Ingresa la resistencia en ohmios: ");
            scanf("%f", &resistencia);
            corriente = voltaje / resistencia;
            printf("Corriente: %.2f A\n", corriente);
            break;
        case 3:
            printf("Ingresa el voltaje en voltios: ");
            scanf("%f", &voltaje);
            printf("Ingresa la corriente en amperios: ");
            scanf("%f", &corriente);
            resistencia = voltaje / corriente;
            printf("Resistencia: %.2f Ohm\n", resistencia);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

// Función para Factor de Potencia
void menu_factor_potencia() {
    float potencia_activa, potencia_reactiva, potencia_aparente, factor_potencia;
    float cos_phi, sin_phi, angulo_phi;

    printf("\nHas seleccionado Factor de Potencia.\n");
    printf("Ingresa la potencia activa (W): ");
    scanf("%f", &potencia_activa);
    printf("Ingresa la potencia reactiva (VAR): ");
    scanf("%f", &potencia_reactiva);

    //potencia aparente
    potencia_aparente = sqrt(pow(potencia_activa, 2) + pow(potencia_reactiva, 2));

    //factor de potencia
    factor_potencia = potencia_activa / potencia_aparente;

    //ángulo phi
    angulo_phi = atan(potencia_reactiva / potencia_activa);

    //coseno y seno de phi
    cos_phi = cos(angulo_phi);
    sin_phi = sin(angulo_phi);

    //resultados
    printf("\nResultados:\n");
    printf("Potencia Aparente: %.2f VA\n", potencia_aparente);
    printf("Factor de Potencia: %.2f\n", factor_potencia);
    printf("Cos(phi): %.2f\n", cos_phi);
    printf("Sen(phi): %.2f\n", sin_phi);
    printf("Ángulo phi (radianes): %.2f\n", angulo_phi);
}


// Función para Resistencia de un Conductor
void menu_resistencia_conductor() {
    float longitud, area, temperatura, resistencia, resistividad, coeficiente;
    int opcion;

    printf("\n--- Calcular Resistencia de un Conductor ---\n");
    printf("1. Oro\n2. Aluminio\n3. Cobre\n4. Otro\nSelecciona el material: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            resistividad = RESISTIVIDAD_ORO;    //lo ponemos asi porque ya declaramos la constante que esto vale y el primer case es oro, entonces asi es mas organizado
            coeficiente = COEFICIENTE_TEMPERATURA_ORO;
            break;
        case 2:
            resistividad = RESISTIVIDAD_ALUMINIO;
            coeficiente = COEFICIENTE_TEMPERATURA_ALUMINIO;
            break;
        case 3:
            resistividad = RESISTIVIDAD_COBRE;
            coeficiente = COEFICIENTE_TEMPERATURA_COBRE;
            break;
        case 4:
            printf("Ingresa la resistividad (ohm·m): ");
            scanf("%f", &resistividad);
            printf("Ingresa el coeficiente de temperatura (1/°C): ");
            scanf("%f", &coeficiente);
            break;
        default:
            printf("Opción no válida.\n");
            return;
    }

    printf("Ingresa la longitud (m): ");
    scanf("%f", &longitud);
    printf("Ingresa el área de la sección transversal (m^2): ");
    scanf("%f", &area);
    printf("Ingresa la temperatura (°C): ");
    scanf("%f", &temperatura);

    resistencia = resistividad * (longitud / area) * (1 + coeficiente * (temperatura - 20));

    printf("\nResistencia del conductor: %.6f ohm\n", resistencia);
}


// Función para calcular la resistencia para un LED
void menu_resistencia_led() {
    float voltaje_fuente, voltaje_led, corriente_led, resistencia, potencia_resistencia, potencia_total, corriente_total;
    int numero_leds;
    char conexion;

    printf("\nHas seleccionado calcular la Resistencia para un LED.\n");
    printf("Ingresa la tensión de la fuente en voltios: ");
    scanf("%f", &voltaje_fuente);
    printf("Ingresa el número de LEDs en el circuito: ");
    scanf("%d", &numero_leds);

    do {
        printf("Tipo de conexión (S para serie, P para paralelo): ");
        scanf(" %c", &conexion);     //%C se usa porque es solo un caracter o s o p, eso también ayuda a que se lea un valor correcto ingresado por el usuario                                                 
        if (conexion != 's' && conexion != 'p') {
            printf("Opción no válida. Intenta de nuevo.\n");
        }
    } while (conexion != 's' && conexion != 'p'); // esta condición es para que no ingresen otro valor "!= diferente de", osea si ingresan algo que no sea 's' o 'p' muestra error 

    printf("Ingresa la tensión nominal del LED: ");
    scanf("%f", &voltaje_led);
    printf("Ingresa la corriente nominal del LED en amperios: ");
    scanf("%f", &corriente_led);

    if (conexion == 'S') {
        corriente_total = corriente_led;
        resistencia = (voltaje_fuente - (voltaje_led * numero_leds)) / corriente_total;
    } else {// si no es en serie es paralelo, por eso no sale la 'p'
        corriente_total = corriente_led * numero_leds;
        resistencia = (voltaje_fuente - voltaje_led) / corriente_total;
    }

    potencia_resistencia = corriente_total * corriente_total * resistencia;
    potencia_total = voltaje_fuente * corriente_total;

    printf("\nResultados:\n");
    printf("Resistencia: %.2f Ohm\n", resistencia);
    printf("Potencia de la resistencia: %.2f W\n", potencia_resistencia);
    printf("Potencia total del circuito: %.2f W\n", potencia_total);
    printf("Corriente total suministrada: %.2f A\n", corriente_total);
}

// Menú principal
void menu_principal() {
    int opcion;
    do {
        printf("\n--- Menú Principal ---\n");
        printf("1. Ley de Ohm\n");
        printf("2. Factor de Potencia\n");
        printf("3. Resistencia de un Conductor\n");
        printf("4. Resistencia para un LED\n");
        printf("5. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                menu_ley_ohm();
                break;
            case 2:
                menu_factor_potencia();
                break;
            case 3:
                menu_resistencia_conductor();
                break;
            case 4:
                menu_resistencia_led();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                exit(0);
            default:
                printf("Opción no válida. Por favor, intenta de nuevo.\n");
        }
    } while (opcion != 5);
}

int main() {
    menu_principal();
    return 0;
}


