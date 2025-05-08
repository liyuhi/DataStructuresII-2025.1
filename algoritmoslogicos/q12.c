/*Verificador de Palíndromo

Dada uma string (array de char), diga se ela é um palíndromo (ex: “arara”, “radar”).*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define max_tam 100

// Função para verificar se uma string é um palíndromo
int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        // Ignora caracteres não alfabéticos
        while (inicio < fim && !isalnum(str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !isalnum(str[fim])) {
            fim--;
        }

        // Compara os caracteres em minúsculas
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; // Não é um palíndromo
        }
        inicio++;
        fim--;
    }
    return 1; // É um palíndromo
}

int main() {
    char str[max_tam];

    printf("Digite uma string: ");
    fgets(str, max_tam, stdin);
    str[strcspn(str, "\n")] = 0; // Remove o '\n' do final

    if (ehPalindromo(str)) {
        printf("A string \"%s\" é um palíndromo.\n", str);
    } else {
        printf("A string \"%s\" não é um palíndromo.\n", str);
    }

    return 0;
}
