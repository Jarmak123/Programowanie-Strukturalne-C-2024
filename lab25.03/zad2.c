#include <stdio.h>
#include <stdlib.h>

float average(unsigned int n, int tab[])
{
    float wynik=0;
    for(int i=0;i<n;i++)
    {
        wynik+=tab[i];
    }
    return wynik/n;
}

int main()
{
    int tab[]={4,5,-8};
    printf("Srednia arytmetyczna tablicy tab to %f",average(3,tab));
    return 0;
}
