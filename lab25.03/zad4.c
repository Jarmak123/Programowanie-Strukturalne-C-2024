#include <stdio.h>
#include <stdlib.h>

void copyArr(unsigned int n, int tab1[],int tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }
}

int main()
{
    int tab[]={1,2,4};
    int tabulacja[3];
    copyArr(3,tab,tabulacja);
    for(int x=0; x<3; x++)
    {
        printf("%d. %d\n",x,tabulacja[x]);
    }
    return 0;
}
