/*Sequência de Fibonacci Recursiva

Escreva uma função recursiva para gerar o n-ésimo número de Fibonacci.*/

#include<stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base: F(0) = 0
    } else if (n == 1) {
        return 1; // Caso base: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursão
    }
}

int main() {
    int n;

    printf("Digite o valor de n para calcular o n-ésimo número de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número não negativo.\n");
    } else {
        printf("O %d-ésimo número de Fibonacci é: %d\n", n, fibonacci(n));
    }

    return 0;
}
