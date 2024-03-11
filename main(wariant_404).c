#include <stdio.h>
#include <stdlib.h>

//WARIANT 404

int wariant_404(unsigned int n)
{
    if(n%4==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n=20;
    printf("Podana liczba %d zwraca wartosc %d\n", n, wariant_404(n));
    n+=1;
    printf("Podana liczba %d zwraca wartosc %d", n, wariant_404(n));

    return 0;
}
