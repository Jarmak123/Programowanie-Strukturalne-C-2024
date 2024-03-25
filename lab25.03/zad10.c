#include <stdio.h>
#include <stdlib.h>

int minIdxMax(unsigned int n, int tab[])
{
    int index;
    int min=tab[0];
    for(int i=0;i<n;i++)
    {
        if(min>=tab[i])
        {
            min=tab[i];
            index=i;
        }
    }
    return index;
}

int main()
{
    int tab[]={50,10,40,20,10};
    printf("Index tablicy z najmniejsza wartoscia to  %d",minIdxMax(sizeof(tab)/sizeof(int),tab));
    return 0;
}
