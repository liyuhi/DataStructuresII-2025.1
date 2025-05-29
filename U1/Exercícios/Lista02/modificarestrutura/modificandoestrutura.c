/*Modifique a estrutura para guardar dados dos alunos com os seguintes campos:
• Nome
• Matrícula
• Nota*/

typedef struct No {
    char nome[50];
    int matricula;
    float nota;
    struct Aluno* esquerdo;
    struct Aluno* direito;
} Aluno;
