/*Verificador de Palíndromo

Dada uma string (array de char), diga se ela é um palíndromo (ex: “arara”, “radar”).*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

// Define o tamanho máximo da string
#define max_tam 100 

// Função para verificar se uma string é um palíndromo
int ehPalindromo(char str[]) {
    int inicio = 0; // Índice inicial
    int fim = strlen(str) - 1; // Índice final

    // Enquanto o índice inicial for menor que o índice final
    while (inicio < fim) {
        // Ignora caracteres não alfabéticos no início
        while (inicio < fim && !isalnum(str[inicio])) {
            inicio++;
        }
        // Ignora caracteres não alfabéticos no final
        while (inicio < fim && !isalnum(str[fim])) {
            fim--;
        }

        // Compara os caracteres em minúsculas
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; // Não é um palíndromo
        }
        inicio++; // Move o índice inicial para frente
        fim--; // Move o índice final para trás
    }
    return 1; // É um palíndromo
}

int main() {
    char str[max_tam]; // Declara a string

    // Solicita ao usuário que digite uma string
    printf("Digite uma string: ");
    fgets(str, max_tam, stdin); // Lê a string do usuário
    str[strcspn(str, "\n")] = 0; // Remove o '\n' do final da string

    // Verifica se a string é um palíndromo e exibe o resultado
    if (ehPalindromo(str)) {
        printf("A string \"%s\" é um palíndromo.\n", str);
    } else {
        printf("A string \"%s\" não é um palíndromo.\n", str);
    }

    return 0; 
}
