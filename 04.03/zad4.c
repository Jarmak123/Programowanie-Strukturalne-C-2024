#include <stdio.h>
#include <stdlib.h>

unsigned int sumNumbers(unsigned int n)
{
    int suma=0;
    for(int i=1;i<=n;i++)
    {
        suma=suma+i;
    }
    return suma;
}

int main()
{
    int wynik = sumNumbers(5);
    printf("Wynik1 to: %d",wynik);
    return 0;
}
