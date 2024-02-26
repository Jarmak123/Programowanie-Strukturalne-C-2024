#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Podaj liczbe A ");
    scanf("%d", &a);

    if(a>0)
    {
        printf("Liczba jest wieksza od 0");
    }
    else if(a<0)
    {
        printf("Liczba jest mniejsza od 0");
    }
    else if(a==0)
    {
        printf("Liczba jest rowna 0");
    }
    else
    {
        printf("Blad");
    }
    return 0;
}
