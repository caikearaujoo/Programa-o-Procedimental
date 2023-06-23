#include <stdio.h>
#include <stdlib.h>

struct produto
{
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
}; typedef struct produto produto;

int main() 
{
    int num_produtos;
    int i;

    printf("Digite o número de produtos: ");
    scanf("%d", &num_produtos);

    produto *estoque = (produto *) malloc(num_produtos * sizeof(produto));

    for (i = 0; i < num_produtos; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Codigo: ");
        scanf("%d", &estoque[i].codigo);
        printf("Nome: ");
        scanf("%s", estoque[i].nome); 
        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
        printf("Preco: ");
        scanf("%f", &estoque[i].preco);
    }

    printf("\nProdutos cadastrados:\n");
    for (i = 0; i < num_produtos; i++) {
        printf("\nProduto %d:\n", i+1);
        printf("Codigo: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preco: %.2f\n", estoque[i].preco);
    }

    free(estoque);

    return 0;
}
