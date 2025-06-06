/*Soma de Matrizes

Crie duas matrizes 3x3, some seus valores e exiba o resultado.*/

#include<stdio.h>

int main() {
    int matriz1[3][3]; // Declaração da primeira matriz 3x3
    int matriz2[3][3]; // Declaração da segunda matriz 3x3
    int resultado[3][3]; // Declaração da matriz para armazenar o resultado da soma
    int i, j; // Variáveis de controle para os loops

    // Leitura da primeira matriz
    printf("Digite os valores da primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) { // Loop para percorrer as linhas
        for (j = 0; j < 3; j++) { // Loop para percorrer as colunas
            scanf("%d", &matriz1[i][j]); // Lê o valor e armazena na matriz1
        }
    }

    // Leitura da segunda matriz
    printf("Digite os valores da segunda matriz 3x3:\n");
    for (i = 0; i < 3; i++) { // Loop para percorrer as linhas
        for (j = 0; j < 3; j++) { // Loop para percorrer as colunas
            scanf("%d", &matriz2[i][j]); // Lê o valor e armazena na matriz2
        }
    }

    // Soma das matrizes
    for (i = 0; i < 3; i++) { // Loop para percorrer as linhas
        for (j = 0; j < 3; j++) { // Loop para percorrer as colunas
            resultado[i][j] = matriz1[i][j] + matriz2[i][j]; // Soma os elementos correspondentes
        }
    }

    // Exibe o resultado
    printf("Matriz resultante da soma:\n");
    for (i = 0; i < 3; i++) { // Loop para percorrer as linhas
        for (j = 0; j < 3; j++) { // Loop para percorrer as colunas
            printf("%4d", resultado[i][j]); // Imprime o elemento da matriz resultante
        }
        printf("\n"); // Nova linha após imprimir cada linha da matriz
    }

    return 0; 
}
