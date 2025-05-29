/*Soma Diagonal Principal

Crie uma matriz 4x4 e calcule a soma da diagonal principal.*/

#include<stdio.h>

int main() {
    int matriz[4][4]; // Declaração da matriz 4x4
    int i, j;         // Variáveis para controle dos loops
    int soma = 0;     // Variável para armazenar a soma dos elementos da diagonal principal

    // Solicita ao usuário que digite os valores da matriz
    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {           // Loop para linhas
        for (j = 0; j < 4; j++) {       // Loop para colunas
            scanf("%d", &matriz[i][j]); // Lê o elemento da matriz na posição [i][j]
        }
    }

    // Soma os elementos da diagonal principal (onde linha == coluna)
    for (i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }

    // Exibe o resultado da soma
    printf("Soma da diagonal principal: %d\n", soma);

    return 0; 
}
