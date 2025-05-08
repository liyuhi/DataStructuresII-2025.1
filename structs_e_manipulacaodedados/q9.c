/*Agenda de Contatos

Crie uma struct Contato e permita adicionar, buscar por nome e exibir todos os contatos.*/

#include<stdio.h>
#include<string.h>

// Tamanho máximo para nome do contato
#define max_nome 100       
 // Tamanho máximo para telefone do contato
#define max_telefone 20   
 // Tamanho máximo para email do contato
#define max_email 100   
// Máximo de contatos que podem ser armazenados
#define max_contatos 100    

// Definição da estrutura Contato
typedef struct {
    char nome[max_nome];         // Nome do contato
    char telefone[max_telefone]; // Telefone do contato
    char email[max_email];       // Email do contato
} Contato;

// Função para adicionar um novo contato
void adicionarContato(Contato contatos[], int *num_contatos) {
    if (*num_contatos >= max_contatos) {
        printf("Limite de contatos atingido.\n");
        return;
    }

    printf("Cadastro do contato %d:\n", *num_contatos + 1);
    
    printf("Nome: ");
    getchar();  // Limpa buffer para entrada correta
    fgets(contatos[*num_contatos].nome, max_nome, stdin);
    contatos[*num_contatos].nome[strcspn(contatos[*num_contatos].nome, "\n")] = 0;  // Remove '\n'

    printf("Telefone: ");
    fgets(contatos[*num_contatos].telefone, max_telefone, stdin);
    contatos[*num_contatos].telefone[strcspn(contatos[*num_contatos].telefone, "\n")] = 0;  // Remove '\n'

    printf("Email: ");
    fgets(contatos[*num_contatos].email, max_email, stdin);
    contatos[*num_contatos].email[strcspn(contatos[*num_contatos].email, "\n")] = 0;  // Remove '\n'

    (*num_contatos)++;
    printf("Contato adicionado com sucesso!\n\n");
}

// Função para buscar contato por nome parcial
void buscarContato(Contato contatos[], int num_contatos) {
    if (num_contatos == 0) {
        printf("Nenhum contato cadastrado.\n\n");
        return;
    }

    char nome_busca[max_nome];
    printf("Digite o nome para buscar: ");
    getchar();  // Limpa buffer para entrada correta
    fgets(nome_busca, max_nome, stdin);
    nome_busca[strcspn(nome_busca, "\n")] = 0;  // Remove '\n'

    int encontrados = 0;
    for (int i = 0; i < num_contatos; i++) {
        // Busca parcial: verifica se nome_busca está contido no nome do contato
        if (strstr(contatos[i].nome, nome_busca) != NULL) {
            printf("Contato %d:\n", i + 1);
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n\n", contatos[i].email);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("Nenhum contato encontrado com esse nome.\n\n");
    }
}

// Função para exibir todos os contatos
void exibirContatos(Contato contatos[], int num_contatos) {
    if (num_contatos == 0) {
        printf("Nenhum contato cadastrado.\n\n");
        return;
    }

    printf("Lista de contatos:\n");
    for (int i = 0; i < num_contatos; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n\n", contatos[i].email);
    }
}

int main() {
    Contato contatos[max_contatos];  // Array para armazenar contatos
    int num_contatos = 0;            // Quantidade de contatos cadastrados
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Adicionar contato\n");
        printf("2. Buscar contato por nome\n");
        printf("3. Exibir todos os contatos\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(contatos, &num_contatos);
                break;
            case 2:
                buscarContato(contatos, num_contatos);
                break;
            case 3:
                exibirContatos(contatos, num_contatos);
                break;
            case 4:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n\n");
        }
    } while (opcao != 4);

    return 0;
}
