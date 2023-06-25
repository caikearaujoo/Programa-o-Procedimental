#include <stdio.h>

int main()
{
    int vet[10], i;

    for (i=0; i<10; i++)
    {
        printf("\nDigite o valor da posicao %d do vetor: ", i);
        scanf ("%d", &vet[i]);
    }

    printf("\n[");
    for (i = 9; i >= 0; i--)
    {
        printf( " %d ", *(vet+i));
    }
    printf("]");
    return 0;
}
