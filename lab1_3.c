#include <stdio.h>
#include <math.h>

double calcular_suma(int *contador) {
    double suma = 0.0;
    double termino = 1.0;
    int temp = 1;
    *contador = 0;

    double tolerancia = 1e-6;

    while (termino >= tolerancia) {
        if (temp % 2 == 0) {
            suma -= termino;
        } else {
            suma += termino;
        }

        (*contador)++;
        temp++;
        termino = 1.0 / temp;
    }

    return suma;
}

int main() {
    int iteraciones = 0;
    
    double suma_calculada = calcular_suma(&iteraciones);
    double ln2_esperado = log(2.0);
    double error_absoluto = fabs(suma_calculada - ln2_esperado);

    printf("Tolerancia: 1e-6\n");
    printf("Iteraciones: %d\n", iteraciones);
    printf("Suma calculada : %.6f\n", suma_calculada);
    printf("ln(2) esperado : %.6f\n", ln2_esperado);
    printf("Error absoluto : %.6f\n", error_absoluto);

    return 0;
}