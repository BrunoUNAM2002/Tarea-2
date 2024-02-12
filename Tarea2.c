#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    // Solicitar al usuario los números y el operador
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    // Realizar la operación según el operador ingresado
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Manejar la división por cero
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: No se puede dividir por cero.\n");
                return 1;  // Salir del programa con código de error
            }
            break;
        default:
            printf("Error: Operador no válido.\n");
            return 1;  // Salir del programa con código de error
    }

    // Mostrar el resultado
    printf("Resultado: %.2f\n", resultado);

    return 0;
}