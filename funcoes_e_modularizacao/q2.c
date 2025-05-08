/*Potência (sem usar pow)

Implemente uma função int potencia(int base, int expoente) que calcule potências usando apenas multiplicações.*/

#include <stdio.h>

//Função para calcular potências sem pow
int potencia(int base, int exp) {
    // Se o expoente for 0, retorna 1 (qualquer número elevado a 0 é 1)
    if (exp == 0) {
    return 1;
}
    
    int resultado = 1;
    
    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exp;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);

    //Verificando se o número digitado é negativo
    if (exp < 0) {
        printf("Digite um expoente não negativo.\n");
        return 1;
    }

    int resultado = potencia(base, exp);
    printf("%d^%d = %d\n", base, exp, resultado);
    return 0;
}
