#include<stdio.h>
#include<stdlib.h>
int main () {
int l;

l=0;

printf("\nDigite o comprimento do lado de um quadrado:");
scanf("%d",&l);

int A= (l*l);

printf("\nA área do quadrado eh: %d metros quadrados",A);
printf("\n");
system("pause");

return (0);
}
