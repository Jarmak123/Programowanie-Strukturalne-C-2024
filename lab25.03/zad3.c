#include <stdio.h>
#include <stdlib.h>

int sumSquares(unsigned int n, int tab[])
{
    int wynik=0;
    for(int i=0;i<n;i++)
    {
        wynik+=tab[i]*tab[i];
    }
    return wynik;
}

int main()
{
    int tab[]={1,2,4};
    printf("Suma kwadratow tablicy tablicy tab to %d",sumSquares(3,tab));
    return 0;
}
