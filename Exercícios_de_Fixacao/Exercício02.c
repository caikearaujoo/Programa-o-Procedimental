#include <stdio.h> 
#include <string.h>
int main ()
{
    char nome [100];
    int i;

    printf("\nDigite um nome completo: ");
    setbuf(stdin,NULL);
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (i=0; *(nome+i) != '\0'; i++)
    {
        if (*(nome+i) >= 'A' && *(nome+i) <= 'Z')
        {
            *(nome+i) += 32;
        }
    }

    printf("\n%s", nome);

    for (i=0; *(nome+i) != '\0'; i++)
    {
        if (*(nome+i) >= 'a' && *(nome+i) <= 'z')
        {
            *(nome+i) -= 32;
        }
    }

    printf("\n%s", nome);

    return 0;
}
