/*Busca Binária

Implemente busca binária em um vetor ordenado.*/

#include<stdio.h>

// Função de busca binária
int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;                // Índice inicial do vetor
    int fim = tamanho - 1;         // Índice final do vetor

    // Enquanto o índice inicial for menor ou igual ao índice final
    while (inicio <= fim) {
        // Calcula o índice do meio
        int meio = inicio + (fim - inicio) / 2;

        // Verifica se o valor no meio é o que estamos buscando
        if (vetor[meio] == valor) {
            return meio;  // Elemento encontrado, retorna a posição
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;  // Busca na metade direita
        } else {
            fim = meio - 1;  // Busca na metade esquerda
        }
    }
    return -1;  // Elemento não encontrado
}

int main() {
    // Vetor ordenado para a busca
    int vetor[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // Calcula o tamanho do vetor
    int valor; // Valor a ser buscado

    // Solicita ao usuário o valor para buscar
    printf("Digite o valor para buscar no vetor: ");
    scanf("%d", &valor);

    // Chama a função de busca binária
    int resultado = buscaBinaria(vetor, tamanho, valor);
    if (resultado != -1) {
        // Se o elemento foi encontrado, exibe a posição
        printf("Elemento %d encontrado na posição %d.\n", valor, resultado);
    } else {
        // Se o elemento não foi encontrado, exibe mensagem
        printf("Elemento %d não encontrado no vetor.\n", valor);
    }

    return 0; 
}

