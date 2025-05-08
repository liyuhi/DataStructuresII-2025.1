/*Cadastro de Alunos

Crie uma struct Aluno com nome, matrícula e média. Cadastre n alunos e mostre os aprovados.*/

#include<stdio.h>
#include<string.h>

// Define o tamanho máximo do nome do aluno
#define max_nome 100 

// Definição da estrutura Aluno
typedef struct {
    char nome[max_nome]; // Nome do aluno
    int matricula;       // Matrícula do aluno
    float media;         // Média do aluno
} Aluno;

int main() {
    int n, i; // Variáveis para o número de alunos e controle de loop
    
    // Solicita ao usuário o número de alunos a serem cadastrados
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    getchar(); // Limpa o buffer após a leitura do número

    // Verifica se o número de alunos é válido
    if (n <= 0) {
        printf("Número de alunos inválido.\n");
        return 1; // Encerra o programa com erro
    }

    Aluno alunos[n]; // Declara um array de estruturas Aluno com tamanho n

    printf("\n--- Cadastro de Alunos ---\n");
    // Loop para cadastrar os alunos
    for (i = 0; i < n; i++) {
        printf("Aluno %d:\n", i + 1);

        // Lê o nome do aluno
        printf("Nome: ");
        fgets(alunos[i].nome, max_nome, stdin);
        // Remove o '\n' final da string lida pelo fgets
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;

        // Lê a matrícula do aluno
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        // Lê a média do aluno
        printf("Média: ");
        scanf("%f", &alunos[i].media);
        getchar(); // Limpa o buffer após a leitura da média

        printf("\n"); // Nova linha para melhor formatação
    }

    // Exibe os alunos aprovados
    printf("Alunos aprovados (média >= 7):\n");
    int aprovados = 0; // Contador para alunos aprovados
    for (i = 0; i < n; i++) {
        // Verifica se a média do aluno é maior ou igual a 7
        if (alunos[i].media >= 7.0) {
            // Imprime os dados do aluno aprovado
            printf("Nome: %s, Matrícula: %d, Média: %.2f\n",
                alunos[i].nome, alunos[i].matricula, alunos[i].media);
            aprovados++; // Incrementa o contador de aprovados
        }
    }

    // Verifica se não houve alunos aprovados
    if (aprovados == 0) {
        printf("Nenhum aluno aprovado.\n");
    }

    return 0; 
}
