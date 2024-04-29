#include <stdio.h>
#include <stdlib.h>

int sumMatrix(int n, int m, int tab[n][m])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int o=0;o<m;o++)
        {
            sum=sum+tab[i][o];
        }
    }
    return sum;
}


int main()
{
    int tab[2][3]={{1,1,1},{1,1,1}};
    printf("%d",sumMatrix(2,3,tab));

    return 0;
}
