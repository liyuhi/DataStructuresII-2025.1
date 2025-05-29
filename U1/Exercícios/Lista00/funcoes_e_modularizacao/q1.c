/*Números Primos em Intervalo

Escreva uma função bool ehPrimo(int n) e use-a para listar todos os primos entre dois números dados pelo usuário.*/

#include<stdio.h>
#include<stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int n) {
    // Números menores ou iguais a 1 não são primos
    if (n <= 1) return false;

    // Verifica se n é divisível por algum número de 2 até a raiz quadrada de n
    for (int i = 2; i * i <= n; i++) {
        // Se n for divisível por i, então não é primo
        if (n % i == 0) return false;
    }
    // Se não encontrou divisores, n é primo
    return true;
}

int main() {
    int inicio, fim;

    printf("Digite o número inicial: ");
    scanf("%d", &inicio);
    
    printf("Digite o número final: ");
    scanf("%d", &fim);

    // Permite que o intervalo esteja na ordem correta
    // Se o número inicial for maior que o final, troca os valores
    if (inicio > fim) {
        int temp = inicio; // Armazena o valor de inicio em uma variável temporária
        inicio = fim;      // Atribui o valor de fim a inicio
        fim = temp;       // Atribui o valor temporário a fim
    }

    // Exibe os números primos no intervalo especificado
    printf("Números primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        // Chama a função ehPrimo para verificar se i é primo
        if (ehPrimo(i)) {
            // Se for primo, imprime o número
            printf("%d ", i);
        }
    }

    // Imprime uma nova linha após listar os números primos
    printf("\n");
    return 0; // Indica que o programa terminou com sucesso
}
