/*Potência (sem usar pow)

Implemente uma função int potencia(int base, int expoente) que calcule potências usando apenas multiplicações.*/

#include<stdio.h>

// Função para calcular potências sem usar a função pow
int potencia(int base, int exp) {
    // Se o expoente for 0, retorna 1 (qualquer número elevado a 0 é 1)
    if (exp == 0) {
        return 1;
    }
    
    // Inicializa a variável resultado como 1
    int resultado = 1;
    
    // Loop que multiplica a base pelo resultado, exp vezes
    for (int i = 0; i < exp; i++) {
        resultado *= base; // Multiplica o resultado pela base
    }

    // Retorna o resultado final da potência
    return resultado;
}

int main() {
    int base, exp;

    // Solicita ao usuário que digite a base
    printf("Digite a base: ");
    scanf("%d", &base);
    
    // Solicita ao usuário que digite o expoente
    printf("Digite o expoente: ");
    scanf("%d", &exp);

    // Verifica se o expoente digitado é negativo
    if (exp < 0) {
        printf("Digite um expoente não negativo.\n");
        return 1; // Encerra o programa com um código de erro
    }

    // Chama a função potencia para calcular a potência
    int resultado = potencia(base, exp);
    
    // Exibe o resultado da potência
    printf("%d^%d = %d\n", base, exp, resultado);
    
    return 0; // Indica que o programa terminou com sucesso
}
