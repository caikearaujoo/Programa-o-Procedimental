#include <stdio.h>

void pontuacao (int *p1, int *p2, int *g1, int *g2);

int main ()
{
    int pontosA, pontosB, golsA, golsB;
    int *p1 = NULL, *p2 = NULL, *g1 = NULL, *g2 = NULL;
    p1 = &pontosA, p2 = &pontosB, g1 = &golsA, g2 = &golsB;

    printf("\nDigite a pontuacao inicial do time A: ");
    scanf("%d", p1);
    printf("\nDiite a pontuacao inicial do time B: ");
    scanf("%d", p2);
    
    printf("\nDigite a quantidade de gols que o time A fez: ");
    scanf ("%d", g1);
    printf("\nDigite a quantidade de gols que o time B fez: ");
    scanf ("%d", g2);

    pontuacao (p1, p2, g1, g2);

    return 0;
}

void pontuacao (int *p1, int *p2, int *g1, int *g2)
{
    if (*g1 == *g2)
    {
        *p1 += 1;
        printf("\nOs times empataram e seus pontos atuais sao: %d do time A e %d do time B ", *p1, *p2 );
    }
    else if (*g1 > *g2)
    {
        *p1 += 3;
        printf("\nO time A venceu e seus pontos atuais sao: %d", *p1);
    }
    else if (*g2 > *g1)
    {
        *p2 += 3;
        printf("\nO time B venceu e seus pontos atuais sao: %d", *p2);
    }
}
