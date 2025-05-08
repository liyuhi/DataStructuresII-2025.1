/*Inverso de Número

Escreva uma função que inverte os dígitos de um número (ex: 1234 → 4321).*/

#include<stdio.h>

// Função que inverte os dígitos de um número
int inverterNumero(int numero) {
    int invertido = 0; // Inicializa a variável que armazenará o número invertido

    // Enquanto o número não for zero
    while (numero != 0) {
        // Adiciona o último dígito do número ao invertido
        invertido = invertido * 10 + numero % 10;
        // Remove o último dígito do número
        numero /= 10;
    }

    // Retorna o número invertido
    return invertido;
}

int main() {
    int numero; // Variável para armazenar o número digitado pelo usuário

    // Solicita ao usuário que digite um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Chama a função inverterNumero para inverter o número
    int resultado = inverterNumero(numero);
    
    // Exibe o resultado do número invertido
    printf("Número invertido: %d\n", resultado);

    return 0; 
}

