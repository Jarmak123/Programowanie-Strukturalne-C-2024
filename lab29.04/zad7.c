#include <stdio.h>
#include <stdlib.h>

void swapElems(int n,int m, int tab[n][m], int tab_2[n][m])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int o=0;o<n;o++)
        {
            if(tab[n][m]!=tab_2[n][m])
            {
                temp=tab_2[n][m];
                tab_2[n][m]=tab[n][m];
                tab[n][m]=temp;
            }

        }
    }
}


int main()
{
    int tab[2][3]={{1,2,3},{4,5,6}};
    int tab_2[2][3]={{1,2,3},{5,6,7}};
    swapElems(2,3,tab,tab_2);

    for(int i=0;i<2;i++)
    {
        for(int o=0;o<3;o++)
        {
            printf("%d\n",tab[i][o]);
        }
    }
    printf("############\n");
    for(int i=0;i<2;i++)
    {
        for(int o=0;o<3;o++)
        {
            printf("%d\n",tab_2[i][o]);
        }
    }

    return 0;
}
