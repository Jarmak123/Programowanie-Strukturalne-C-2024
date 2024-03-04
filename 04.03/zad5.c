#include <stdio.h>
#include <stdlib.h>

unsigned int sumSquares(unsigned int n)
{
    int suma=0;
    for(int i=1;i<=n;i++)
    {
        suma=suma+(i*i);
    }
    return suma;
}

int main()
{
    int wynik = sumSquares(5);
    printf("Wynik1 to: %d",wynik);
    return 0;
}
