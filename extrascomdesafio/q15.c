/*Jogo da Forca (Console)

Desenvolva um jogo simples da forca no terminal, usando vetores e controle de fluxo.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max_erros 6

void mostrar_forca(int erros) {
    switch(erros) {
        case 0:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 1:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 2:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf("  |   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 3:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|   |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 4:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf("      |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 5:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf(" /    |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 6:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");
            printf("      |\n");
            printf("=========\n\n");
            break;
    }
}

int main() {
    const char palavra_secreta[] = "programa";
    int tamanho = strlen(palavra_secreta);
    char letras_descobertas[tamanho + 1];
    char chutes[26];
    int erros = 0;
    int tentativas = 0;

    // Inicializa string das letras descobertas com underscores
    for(int i = 0; i < tamanho; i++) {
        letras_descobertas[i] = '_';
    }
    letras_descobertas[tamanho] = '\0';

    printf("=== Jogo da Forca ===\n");

    while (erros < max_erros && strcmp(letras_descobertas, palavra_secreta) != 0) {
        mostrar_forca(erros);
        printf("Palavra: %s\n", letras_descobertas);
        printf("Erros: %d de %d\n", erros, max_erros);
        printf("Chutes já feitos: ");
        for(int i = 0; i < tentativas; i++) {
            printf("%c ", chutes[i]);
        }
        printf("\n");

        printf("Digite uma letra: ");
        char chute;
        scanf(" %c", &chute);
        chute = tolower(chute);

        // Verifica se já foi chutada
        int repetido = 0;
        for(int i = 0; i < tentativas; i++) {
            if(chutes[i] == chute) {
                repetido = 1;
                break;
            }
        }
        if(repetido) {
            printf("Você já tentou essa letra. Tente outra.\n");
            continue;
        }

        chutes[tentativas++] = chute;

        // Verifica se a letra está na palavra
        int acertou = 0;
        for(int i = 0; i < tamanho; i++) {
            if(palavra_secreta[i] == chute) {
                letras_descobertas[i] = chute;
                acertou = 1;
            }
        }

        if(!acertou) {
            erros++;
            printf("Letra incorreta!\n");
        } else {
            printf("Letra correta!\n");
        }
    }

    mostrar_forca(erros);

    if(strcmp(letras_descobertas, palavra_secreta) == 0) {
        printf("Parabéns! Você ganhou! A palavra era: %s\n", palavra_secreta);
    } else {
        printf("Game Over! Você perdeu. A palavra era: %s\n", palavra_secreta);
    }

    return 0;
}
