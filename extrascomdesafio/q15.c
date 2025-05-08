/*Jogo da Forca (Console)

Desenvolva um jogo simples da forca no terminal, usando vetores e controle de fluxo.*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Número máximo de erros permitidos
#define max_erros 6  

// Função para desenhar o boneco da forca conforme o número de erros
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
            printf(" /|\\  |\n");  // Braço direito adicionado
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
            printf(" /    |\n");  // Perna esquerda
            printf("      |\n");
            printf("=========\n\n");
            break;
        case 6:
            printf("\n\n");
            printf("  +---+\n");
            printf("  |   |\n");
            printf("  O   |\n");
            printf(" /|\\  |\n");
            printf(" / \\  |\n");  // Perna direita (boneco completo)
            printf("      |\n");
            printf("=========\n\n");
            break;
    }
}

int main() {
    const char palavra_secreta[] = "programa";  // Palavra fixa a ser adivinhada
    int tamanho = strlen(palavra_secreta);      // Tamanho da palavra
    char letras_descobertas[tamanho + 1];       // Vetor com as letras adivinhadas ou '_'
    char chutes[26];                            // Vetor com os chutes feitos
    int erros = 0;                              
    int tentativas = 0;                         // Número de chutes já feitos

    // Inicializa o vetor com '_' para representar letras não descobertas
    for(int i = 0; i < tamanho; i++) {
        letras_descobertas[i] = '_';
    }
    letras_descobertas[tamanho] = '\0';  // Finaliza a string com NULL

    printf("=== Jogo da Forca ===\n");

    // Laço principal do jogo
    while (erros < max_erros && strcmp(letras_descobertas, palavra_secreta) != 0) {
        mostrar_forca(erros);  // Desenha a forca atual
        printf("Palavra: %s\n", letras_descobertas);
        printf("Erros: %d de %d\n", erros, max_erros);
        printf("Chutes já feitos: ");
        for(int i = 0; i < tentativas; i++) {
            printf("%c ", chutes[i]);  // Mostra letras já chutadas
        }
        printf("\n");

        // Lê o chute do jogador
        printf("Digite uma letra: ");
        char chute;
        scanf(" %c", &chute);  // O espaço antes do %c ignora espaços em branco
        chute = tolower(chute);  // Converte para minúscula

        // Verifica se a letra já foi chutada antes
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

        // Adiciona o chute ao vetor de tentativas
        chutes[tentativas++] = chute;

        // Verifica se a letra existe na palavra
        int acertou = 0;
        for(int i = 0; i < tamanho; i++) {
            if(palavra_secreta[i] == chute) {
                letras_descobertas[i] = chute;  // Revela a letra na posição correta
                acertou = 1;
            }
        }

        // Atualiza erros ou confirma acerto
        if(!acertou) {
            erros++;
            printf("Letra incorreta!\n");
        } else {
            printf("Letra correta!\n");
        }
    }

    // Exibe o resultado final
    mostrar_forca(erros);
    if(strcmp(letras_descobertas, palavra_secreta) == 0) {
        printf("Parabéns, você ganhou! A palavra era: %s\n", palavra_secreta);
    } else {
        printf("Game Over! Você perdeu. A palavra era: %s\n", palavra_secreta);
    }

    return 0;
}

