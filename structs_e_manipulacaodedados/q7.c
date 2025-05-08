/*Cadastro de Alunos

Crie uma struct Aluno com nome, matrícula e média. Cadastre n alunos e mostre os aprovados.*/

#include <stdio.h>
#include <string.h>

#define max_nome 100

typedef struct {
    char nome[max_nome];
    int matricula;
    float media;
} Aluno;

int main() {
    int n, i;
    
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    getchar(); // limpa o buffer após leitura do número

    Aluno alunos[n];

    for (i = 0; i < n; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        fgets(alunos[i].nome, max_nome, stdin);
        // Remove o '\n' final da string lida pelo fgets
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Média: ");
        scanf("%f", &alunos[i].media);
        getchar(); // limpa buffer após leitura da média

        printf("\n");
    }

    printf("Alunos aprovados (média >= 7):\n");
    int aprovados = 0;
    for (i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Matrícula: %d, Média: %.2f\n",
                   alunos[i].nome, alunos[i].matricula, alunos[i].media);
            aprovados++;
        }
    }

    if (aprovados == 0) {
        printf("Nenhum aluno aprovado.\n");
    }

    return 0;
}
