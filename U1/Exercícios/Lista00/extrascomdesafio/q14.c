/*Cifra de César

Escreva uma função para criptografar uma mensagem usando a Cifra de César (deslocamento de letras).*/

#include<stdio.h>
#include<ctype.h>

// Função para criptografar usando a Cifra de César
void cifra_de_cesar(char *mensagem, int deslocamento) {
    int i = 0; // Índice para percorrer a string
    char c;    // Variável para armazenar o caractere atual

    // Percorre cada caractere na string até encontrar o terminador nulo
    while (mensagem[i] != '\0') {
        c = mensagem[i]; // Obtém o caractere atual

        // Verifica se o caractere é uma letra
        if (isalpha(c)) {
            char base = 'A'; // Define a base para letras maiúsculas
            if (islower(c)) {
                base = 'a'; // Se for letra minúscula, ajusta a base
            }
            // Aplica o deslocamento mantendo o caractere dentro do intervalo alfabético
            mensagem[i] = (char)((c - base + deslocamento) % 26 + base);
        }
        // Se não for letra, mantém o caractere original
        i++; // Avança para o próximo caractere
    }
}

// Função principal para demonstração
int main() {
    char mensagem[] = "Ola Mundo!"; // Mensagem a ser criptografada
    int deslocamento = 3; // Valor de deslocamento para a cifra

    // Exibe a mensagem original
    printf("Mensagem original: %s\n", mensagem);
    // Chama a função para criptografar a mensagem
    cifra_de_cesar(mensagem, deslocamento);
    // Exibe a mensagem criptografada
    printf("Mensagem criptografada: %s\n", mensagem);

    return 0; 
}
