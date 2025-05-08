/*Interseção de Vetores

Dado dois vetores de inteiros, mostre os elementos comuns entre eles.*/

#include<stdio.h>

int main() {
    int vetor1[100], vetor2[100]; // Declaração de dois vetores para armazenar os inteiros
    int tamanho1, tamanho2; // Variáveis para armazenar os tamanhos dos vetores
    int i, j, encontrado; // Variáveis de controle para os loops

    // Leitura do tamanho e elementos do primeiro vetor
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1); // Lê o tamanho do primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    
    for (i = 0; i < tamanho1; i++) {
        scanf("%d", &vetor1[i]); // Lê os elementos do primeiro vetor
    }

    // Leitura do tamanho e elementos do segundo vetor
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2); // Lê o tamanho do segundo vetor
    printf("Digite os elementos do segundo vetor:\n");
    
    for (i = 0; i < tamanho2; i++) {
        scanf("%d", &vetor2[i]); // Lê os elementos do segundo vetor
    }

    printf("Elementos comuns:\n");
    // Para cada elemento do vetor1, verifica se ele está no vetor2 e se já não foi impresso
    for (i = 0; i < tamanho1; i++) {
        // Verifica se o elemento já foi impresso antes
        int repetido = 0; // Flag para verificar se o elemento já foi encontrado
        for (j = 0; j < i; j++) {
            if (vetor1[i] == vetor1[j]) { // Compara com elementos anteriores do vetor1
                repetido = 1; // Marca como repetido se encontrado
                break; // Sai do loop se já foi encontrado
            }
        }
        if (repetido) // Se o elemento já foi impresso, pula para a próxima iteração
            continue;

        // Verifica se o elemento existe em vetor2
        encontrado = 0; // Inicializa a flag para verificar se o elemento foi encontrado
        for (j = 0; j < tamanho2; j++) {
            if (vetor1[i] == vetor2[j]) { // Compara o elemento do vetor1 com os elementos do vetor2
                encontrado = 1; // Marca como encontrado se houver correspondência
                break; // Sai do loop se encontrado
            }
        }

        // Se o elemento foi encontrado em vetor2, imprime
        if (encontrado) {
            printf("%d ", vetor1[i]); // Imprime o elemento comum
        }
    }

    printf("\n"); // Nova linha após a lista de elementos comuns

    return 0; 
}

