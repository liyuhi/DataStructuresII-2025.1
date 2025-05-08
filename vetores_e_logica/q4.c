/*Frequência de Números

Leia 10 números inteiros e mostre quantas vezes cada número distinto aparece.*/

#include <stdio.h>

int main() {
    int numeros[10];
    int frequencia[10] = {0};
    int i, j;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++) {
        // Verifica se o número já apareceu antes
        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                repetido = 1;
                break;
            }
        }
        // Verifica se não é repetido e conta quantas vezes aparece
        if (!repetido) {
            int cont = 1;
            for (j = i + 1; j < 10; j++) {
                if (numeros[i] == numeros[j]) {
                    cont++;
                }
            }
            printf("Número %d aparece %d vez(es)\n", numeros[i], cont);
        }
    }

    return 0;
}
