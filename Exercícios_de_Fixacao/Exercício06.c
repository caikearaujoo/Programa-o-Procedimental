#include <stdio.h>

int main ()
{
    FILE *fp;
    char nome[20];
    int nota1, nota2, nota3, media;
    
    fp = fopen ("notas.txt", "r");
    if (fp == NULL)
    {
        printf("\nErro ao abrir o arquivo.");
    }
    while (fscanf(fp, "%s %d %d %d", nome, &nota1, &nota2, &nota3) == 4)
    {
        media = (nota1 + nota2 + nota3)/3;
        if (media >= 6)
        {
            printf("\n%s: %d -- APROVADO", nome, media);
        }
        else
        {
            printf("\n%s: %d -- REPROVADO", nome, media);
        }
    }
    fclose(fp);
    return 0;
}
