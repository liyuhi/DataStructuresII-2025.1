/*Soma Diagonal Principal

Crie uma matriz 4x4 e calcule a soma da diagonal principal.*/

#include<stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int soma = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        soma += matriz[i][i];  // soma elementos da diagonal principal
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}
