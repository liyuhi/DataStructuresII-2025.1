/*Inverso de Número

Escreva uma função que inverte os dígitos de um número (ex: 1234 → 4321).*/

#include<stdio.h>

int inverterNumero(int numero) {
    int invertido = 0;

    while (numero != 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = inverterNumero(numero);
    printf("Número invertido: %d\n", resultado);

    return 0;
}
