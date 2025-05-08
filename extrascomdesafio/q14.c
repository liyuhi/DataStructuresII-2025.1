/*Cifra de César

Escreva uma função para criptografar uma mensagem usando a Cifra de César (deslocamento de letras).*/

#include<stdio.h>
#include<ctype.h>

// Função para criptografar usando a Cifra de César
void cifra_de_cesar(char *mensagem, int deslocamento) {
    int i = 0;
    char c;
    // Percorre cada caractere na string
    while (mensagem[i] != '\0') {
        c = mensagem[i];
        if (isalpha(c)) {
            char base = 'A';
            if (islower(c)) {
                base = 'a';
            }
            // Aplica o deslocamento mantendo no intervalo alfabético
            mensagem[i] = (char)((c - base + deslocamento) % 26 + base);
        }
        // Se não for letra, mantém o caractere original
        i++;
    }
}

// Função principal para demonstração
int main() {
    char mensagem[] = "Ola Mundo!";
    int deslocamento = 3;

    printf("Mensagem original: %s\n", mensagem);
    cifra_de_cesar(mensagem, deslocamento);
    printf("Mensagem criptografada: %s\n", mensagem);

    return 0;
}
