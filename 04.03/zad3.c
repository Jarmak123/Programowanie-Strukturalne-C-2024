#include <stdio.h>
#include <stdlib.h>

unsigned int calculateFactorial(unsigned int a)
{
    int suma=1;
    for(int i=1;i<=a;i++)
    {
        suma=suma*i;
    }
    return suma;
}

int main()
{
    int wynik = calculateFactorial(5);
    printf("Wynik1 to: %d",wynik);
    return 0;
}
