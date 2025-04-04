#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

// Función para calcular el interés compuesto
double interesCompuesto(double principal, double tasa, int tiempo) {
    return principal * pow(1 + (tasa / PI), tiempo);
}

int main() {
    double principal = 1000.0;  // Capital inicial
    double tasa = 0.05;         // Tasa de interés (5%)
    int tiempo = 10;            // Número de años

    double montoFinal = interesCompuesto(principal, tasa, tiempo);
    printf("Monto final después de %d años: %.2f\n", tiempo, montoFinal);

    return 0;
}
