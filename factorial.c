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

// Función para calcular el promedio de una cantidad variable de elementos
double calcular_promedio(int cantidad, double elementos[]) {
    double suma = 0.0;
    for (int i = 0; i < cantidad; i++) {
        suma += elementos[i];
    }
    return suma / cantidad;
}

int main() {
    int opcion;
    do {
        printf("Menu de opciones:\n");
        printf("1. Calcular el factorial de un numero\n");
        printf("2. Calcular el valor absoluto de un numero\n");
        printf("3. Calcular el promedio de una cantidad de elementos\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                int n;
                printf("Introduce un numero: ");
                scanf("%d", &n);
                if (n >= 0) {
                    printf("Factorial de %d = %llu\n", n, factorial(n));
                }
                break;
            }
            case 2: {
                double num;
                printf("Introduce un numero: ");
                scanf("%lf", &num);
                printf("Valor absoluto de %.2lf = %.2lf\n", num, valor_absoluto(num));
                break;
            }
            case 3: {
                int cantidad;
                printf("Introduce la cantidad de elementos: ");
                scanf("%d", &cantidad);
                if (cantidad > 0) {
                    double elementos[cantidad];
                    for (int i = 0; i < cantidad; i++) {
                        printf("Introduce el elemento %d: ", i + 1);
                        scanf("%lf", &elementos[i]);
                    }
                    printf("El promedio de los elementos es = %.2lf\n", calcular_promedio(cantidad, elementos));
                } else {
                    printf("La cantidad de elementos debe ser mayor que 0.\n");
                }
                break;
            }
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while(opcion != 4);

    printf("Integrantes: Hector Godoy, Jhosnar Ereu, Jorge Pina\n");
    return 0;
}
