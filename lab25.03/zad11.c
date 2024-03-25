#include <stdio.h>
#include <stdlib.h>

void shiftLeft(unsigned n, float tab[])
{
    float wynik[n];
    wynik[0]=tab[n-1];
    for(int i=1;i<n;i++)
    {
        wynik[i]=tab[i-1];
    }

    for(int x=0;x<n;x++)
    {
        printf("%d.%f\n",x,wynik[x]);
    }
}

int main()
{
    float tab[]={50,10,40,20,10};
    shiftLeft(5,tab);
    return 0;
}
