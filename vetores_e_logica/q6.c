/*Soma de Matrizes

Crie duas matrizes 3x3, some seus valores e exiba o resultado.*/

#include <stdio.h>

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];
    int i, j;

    // Leitura da primeira matriz
    printf("Digite os valores da primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Leitura da segunda matriz
    printf("Digite os valores da segunda matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Soma das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibe o resultado
    printf("Matriz resultante da soma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
