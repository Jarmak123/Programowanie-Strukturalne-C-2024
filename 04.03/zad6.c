#include <stdio.h>
#include <stdlib.h>

int calculatePowerOfTwo(int n)
{
    int wynik=2;
    for(int i=2;i<=n;i++)
    {
    if(n==0)
    {
        wynik=1;
        break;
    }
    else if(n==1)
    {
        wynik=wynik;
        break;
    }
    else
    {
        wynik=wynik*2;
    }
    }
    return wynik;
}

int main()
{
    int wynik = calculatePowerOfTwo(4);
    printf("Wynik1 to: %d\n",wynik);
    return 0;
}
