#include <stdio.h>
#include <stdlib.h> //exit
int main ()
{
    int **p1 = NULL, linhas, colunas, i, j;

    printf("\nDigite as dimensoes da matriz desejada: ");
    scanf("%d %d", &linhas, &colunas);

    p1 = (int**) malloc (linhas * sizeof(int));

    for (i = 0; i < colunas; i++)
    {
        p1 [i] = (int*) malloc (colunas * sizeof(int));
        for (j=0; j<colunas; j++)
        {
            printf("\nDigite os valores da posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &p1[i][j]);
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf(" %d ", p1[i][j]);
        }
        printf("\n");
    }
    free (p1);
    return 0;
}
