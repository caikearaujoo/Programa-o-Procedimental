#include <stdio.h>
#include <stdlib.h>

void encontrarMaior(int *array, int tamanho, int *maior);

void imprimirArray(int *array, int tamanho, int k);

int main() 
{
    int N, k;

    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    printf("Digite o valor de k: ");
    scanf("%d", &k);

    int *array = (int *) malloc(N * sizeof(int));

    if (array == NULL) {
        printf("Erro de memoria insuficiente.\n");
        return 1;
    }

    printf("Digite os valores do array:\n");
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &array[i]);
    }

    printf("Array:\n");
    imprimirArray(array, N, k);

    int maior;
    encontrarMaior(array, N, &maior);
    printf("Maior elemento: %d\n", maior);

    free(array);

    return 0;
}

void encontrarMaior(int *array, int tamanho, int *maior) 
{
    *maior = array[0];

    for (int i = 1; i < tamanho; i++) 
    {
        if (array[i] > *maior) 
        {
            *maior = array[i];
        }
    }
}

void imprimirArray(int *array, int tamanho, int k) 
{
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", array[i]);

        if ((i + 1) % k == 0) {
            printf("\n");
        }
    }
    printf("\n");
}
