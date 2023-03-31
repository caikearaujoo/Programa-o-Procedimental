#include <stdio.h>
#include <stdlib.h>


int main()
{
float media=0;
int qntd=0;
int valor=0;
int soma=0;
int qntd_negativo=0;
while (qntd<10)
    {
    printf("\nDigite um numero inteiro:\n");
    scanf ("%d", &valor);
    if (valor<0)
    {
        qntd_negativo++;
    }
    qntd++;
    soma += valor;
}
    media = soma/(qntd-qntd_negativo);
printf("\nA media dos valores eh: %f",media);
return 0;
}
