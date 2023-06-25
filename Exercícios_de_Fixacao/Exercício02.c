#include <stdio.h> 
#include <string.h>
int main ()
{
    char nome[30];
    char *p1 = NULL;
    p1 = nome; 

    printf("\nDigite seu nome completo: ");
    setbuf(stdin, NULL);
    fgets(p1, 30, stdin);
    p1[strcspn(p1, "\n")] = '\0';

    for (int i = 0; p1[i] != '\0'; i++)
    {
        if(p1[i] >= 'A' && p1[i] <= 'Z')
        {
            p1[i] += 32;
        }
    }
    printf("\n%s", p1);

    for (int i = 0; *(p1+i) != '\0'; i++)
    {
        if( *(p1+i) >= 'a' && *(p1+i) <= 'z')
        {
            *(p1+i) -= 32;
        }
    }
    printf ("\n%s", p1);

    return 0;
}
