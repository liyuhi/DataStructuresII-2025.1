/*Interseção de Vetores

Dado dois vetores de inteiros, mostre os elementos comuns entre eles.*/

#include stdio.h>

int main() {
    int vetor1[100], vetor2[100];
    int tamanho1, tamanho2;
    int i, j, encontrado;

    // Leitura do tamanho e elementos do primeiro vetor
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &tamanho1);
    printf("Digite os elementos do primeiro vetor:\n");
    for (i = 0; i  tamanho1; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Leitura do tamanho e elementos do segundo vetor
    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &tamanho2);
    printf("Digite os elementos do segundo vetor:\n");
    for (i = 0; i  tamanho2; i++) {
        scanf("%d", &vetor2[i]);
    }

    printf("Elementos comuns:\n");
    // Para cada elemento do vetor1, verifica se ele está no vetor2 e se já não foi impresso
    for (i = 0; i  tamanho1; i++) {
        // Verifica se elemento já foi impresso antes
        int repetido = 0;
        for (j = 0; j  i; j++) {
            if (vetor1[i] == vetor1[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido)
            continue;

        // Verifica se o elemento existe em vetor2
        encontrado = 0;
        for (j = 0; j  tamanho2; j++) {
            if (vetor1[i] == vetor2[j]) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("%d ", vetor1[i]);
        }
    }

    printf("\n");

    return 0;
}
