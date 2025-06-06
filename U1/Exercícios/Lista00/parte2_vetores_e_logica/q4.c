/*Frequência de Números

Leia 10 números inteiros e mostre quantas vezes cada número distinto aparece.*/

#include<stdio.h>

int main() {
    int numeros[10]; // Array para armazenar os 10 números inteiros
    int frequencia[10] = {0}; // Array para armazenar a frequência de cada número
    int i, j; // Variáveis de controle para os loops

    // Solicita ao usuário que digite 10 números inteiros
    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]); // Lê cada número e armazena no array
    }

    // Loop para contar a frequência de cada número
    for (i = 0; i < 10; i++) {
        // Verifica se o número já apareceu antes
        int repetido = 0; // Flag para verificar se o número é repetido
        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) { // Compara com números anteriores
                repetido = 1; // Marca como repetido se encontrado
                break; // Sai do loop se já foi encontrado
            }
        }
        // Se o número não é repetido, conta quantas vezes aparece
        if (!repetido) {
            int cont = 1; // Inicializa contador para o número atual
            for (j = i + 1; j < 10; j++) { // Verifica os números restantes
                if (numeros[i] == numeros[j]) { // Se encontrar o mesmo número
                    cont++; // Incrementa o contador
                }
            }
            // Exibe a frequência do número atual
            printf("Número %d aparece %d vez(es)\n", numeros[i], cont);
        }
    }

    return 0; 
}
