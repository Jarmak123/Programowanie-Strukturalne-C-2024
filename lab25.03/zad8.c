#include <stdio.h>
#include <stdlib.h>

int minValue(unsigned int n, int tab[])
{
    int min = tab[0];
    for(int i=0;i<n;i++)
    {
        if(min>tab[i])
        {
            min=tab[i];
        }
    }
    return min;
}

int main()
{
    int tab[]={14,1,2,3,4,5,6,7};
    printf("Najmniejsza wartoscia tablicy tab jest %d",minValue(sizeof(tab)/sizeof(int),tab));
    return 0;
}
