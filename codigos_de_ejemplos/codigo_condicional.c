#include <stdio.h>

int main() {
    int N = 17, M = 45, P = 36, Q = 0;
    int resultado;
    resultado = (M % 2 == 0) || (N % 3 != 0) && (P > Q);
    printf("El resultado es %d\n", resultado);
    return 0;
}
