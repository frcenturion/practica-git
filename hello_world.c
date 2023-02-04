#include <stdio.h>


int sumar(int a, int b);


int main() {

    printf("CALCULADORA \n \n");

    int resultado = sumar(1, 2);

    printf("El resultado de la cuenta es %d", resultado);
}


int sumar(int a, int b) {
    return a + b;
}