/*Números Primos em Intervalo

Escreva uma função bool ehPrimo(int n) e use-a para listar todos os primos entre dois números dados pelo usuário.*/

#include<stdio.h>
#include<stdbool.h>

//função para verificar se o número é primo
bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int inicio, fim;

    //pedir dois números para o usuário
    printf("Digite o número inicial: ");
    scanf("%d", &inicio);
    printf("Digite o número final: ");
    scanf("%d", &fim);

    //permitir que o intervalo esteja na ordem correta
    if (inicio > fim) {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    printf("Números primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
