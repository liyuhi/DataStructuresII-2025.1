/*Busca Binária

Implemente busca binária em um vetor ordenado.*/

#include <stdio.h>

// Função de busca binária
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == valor) {
            return meio;  // elemento encontrado, retorna a posição
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;  // busca na metade direita
        } else {
            fim = meio - 1;  // busca na metade esquerda
        }
    }
    return -1;  // elemento não encontrado
}

int main() {
    int vetor[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;

    printf("Digite o valor para buscar no vetor: ");
    scanf("%d", &valor);

    int resultado = buscaBinaria(vetor, tamanho, valor);
    if (resultado != -1) {
        printf("Elemento %d encontrado na posição %d.\n", valor, resultado);
    } else {
        printf("Elemento %d não encontrado no vetor.\n", valor);
    }

    return 0;
}
