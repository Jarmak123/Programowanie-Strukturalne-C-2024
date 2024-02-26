#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Podaj liczbe A ");
    scanf("%d", &a);
    printf("Podaj liczbe B ");
    scanf("%d", &b);

    if (a>b)
    {
        printf("%d",a);
    }
    else if(b>a)
    {
        printf("%d",b);
    }
    else if(a==b)
    {
        printf("Liczby sa rowne - wyswietlam wspolna wartosc dla a i b: %d",a);
    }

    return 0;
}
