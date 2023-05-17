#include <stdio.h>
#include <string.h>

#define MAX_DIRETORES 5
#define MAX_FILMES 10
#define MAX_NOME 20

struct Filme 
{
    char nome[MAX_NOME];
    int ano;
    int duracao;
};

struct Diretor 
{
    char nome[MAX_NOME];
    int quantidadeFilmes;
    struct Filme filmes[MAX_FILMES];
};

void lerFilmes(struct Diretor *diretor) 
{
    int i;
    printf("Digite a quantidade de filmes: ");
    scanf("%d", &diretor->quantidadeFilmes);

    for (i = 0; i < diretor->quantidadeFilmes; i++) {
        printf("Digite o nome do filme %d: ", i + 1);
        scanf("%s", diretor->filmes[i].nome);

        printf("Digite o ano do filme %d: ", i + 1);
        scanf("%d", &diretor->filmes[i].ano);

        printf("Digite a duração do filme %d: ", i + 1);
        scanf("%d", &diretor->filmes[i].duracao);
    }
}

void procurarDiretor(struct Diretor diretores[]) 
{
    char nomeDiretor[MAX_NOME];
    int i, j, encontrado = 0;

    printf("Digite o nome do diretor que deseja procurar: ");
    scanf("%s", nomeDiretor);

    for (i = 0; i < MAX_DIRETORES; i++) 
    {
        if (strcmp(nomeDiretor, diretores[i].nome) == 0) 
        {
            printf("Filmes do diretor %s:\n", diretores[i].nome);

            for (j = 0; j < diretores[i].quantidadeFilmes; j++) 
            {
                printf("Filme %d:\n", j + 1);
                printf("Nome: %s\n", diretores[i].filmes[j].nome);
                printf("Ano: %d\n", diretores[i].filmes[j].ano);
                printf("Duração: %d\n", diretores[i].filmes[j].duracao);
                printf("\n");
            }

            encontrado = 1;
            break;
        }
    }

    if (!encontrado) 
    {
        printf("Diretor não encontrado.\n");
    }
}

int main() {
    struct Diretor diretores[MAX_DIRETORES];
    int i;

    for (i = 0; i < MAX_DIRETORES; i++) 
    {
        printf("Digite o nome do diretor %d: ", i + 1);
        scanf("%s", diretores[i].nome);

        lerFilmes(&diretores[i]);
    }

    while (1) 
    {
        procurarDiretor(diretores);
    }

    return 0;
}
