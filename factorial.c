#include <stdio.h>
#include <stdlib.h>

// Funcion para calcular el factorial de un numero
unsigned long long factorial(int n) {
    if (n < 0) {
        printf("No existe el factorial de un numero negativo.\n");
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Función para calcular el valor absoluto de un número
double valor_absoluto(double num) {
    if (num < 0) {
        return -num;
    }
    return num;
}

