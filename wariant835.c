#include <stdio.h>
#include <stdlib.h>

//Wariant 835

int sumEvenNumbers(unsigned int n, int tab[])
{
    int wynik=0;
    for (int i=0; i<n; i++)
    {
        if(tab[i]%2==0)
        {
            wynik=wynik+tab[i];
        }
    }
    return wynik;
}

int main()
{
    int tablica[]={1,2,4,5};
    printf("Suma elementow parzystych w naszej tablicy to %d", sumEvenNumbers(4,tablica));

    return 0;
}
