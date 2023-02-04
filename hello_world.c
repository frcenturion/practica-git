#include <stdio.h>


int sumar(int a, int b);
int restar(int a, int b);

int main() {

    printf("--------------------------------------------------- CALCULADORA --------------------------------------------------- \n \n");

    int num1, num2, resultado;


    printf("Escriba el primer numero: ");
    scanf("%d", &num1);
    
    printf("\n");

    printf("Escriba el segundo numero: ");
    scanf("%d", &num2);

    printf("\n");

    resultado = sumar(num1, num2);

    printf("El resultado de la cuenta es %d", resultado);
}

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}