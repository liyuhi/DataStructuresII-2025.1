/*Estoque Simples

Crie uma struct Produto com nome, código, quantidade e preço. Permita cadastrar, buscar e listar produtos*/

#include<stdio.h>
#include<string.h>

#define max_nome 100
#define max_produtos 100

typedef struct {
    char nome[max_nome];
    int codigo;
    int quantidade;
    float preco;
} Produto;

// Função para cadastrar um novo produto
void cadastrarProduto(Produto produtos[], int *num_produtos) {
    if (*num_produtos >= max_produtos) {
        printf("Limite de produtos atingido.\n");
        return;
    }

    printf("Cadastro do produto %d:\n", *num_produtos + 1);
    printf("Nome: ");
    getchar(); // Limpar buffer
    fgets(produtos[*num_produtos].nome, max_nome, stdin);
    produtos[*num_produtos].nome[strcspn(produtos[*num_produtos].nome, "\n")] = 0; // Remove '\n'

    printf("Código: ");
    scanf("%d", &produtos[*num_produtos].codigo);

    printf("Quantidade: ");
    scanf("%d", &produtos[*num_produtos].quantidade);

    printf("Preço: ");
    scanf("%f", &produtos[*num_produtos].preco);

    (*num_produtos)++;
    printf("Produto cadastrado com sucesso!\n\n");
}

// Função para buscar um produto por código
void buscarProduto(Produto produtos[], int num_produtos) {
    int codigo;
    printf("Digite o código do produto para buscar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < num_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preço: %.2f\n\n", produtos[i].preco);
            return;
        }
    }
    printf("Produto com código %d não encontrado.\n\n", codigo);
}

// Função para listar todos os produtos
void listarProdutos(Produto produtos[], int num_produtos) {
    if (num_produtos == 0) {
        printf("Nenhum produto cadastrado.\n\n");
        return;
    }

    printf("Lista de Produtos:\n");
    for (int i = 0; i < num_produtos; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: %.2f\n\n", produtos[i].preco);
    }
}

int main() {
    Produto produtos[max_produtos];
    int num_produtos = 0;
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Buscar produto\n");
        printf("3. Listar produtos\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &num_produtos);
                break;
            case 2:
                buscarProduto(produtos, num_produtos);
                break;
            case 3:
                listarProdutos(produtos, num_produtos);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n\n");
        }
    } while (opcao != 4);

    return 0;
}
