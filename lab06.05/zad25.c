#include <stdio.h>
#include <stdlib.h>

void sortRows(int n, int m, int tab[n][m])
{
    int schowek;
    for(int i=0;i<n;i++)
    {
        for(int u=0;u<m-1;u++)
        {
            for(int x=0;x<m-1;x++)
            {
                if(tab[i][x]>tab[i][x+1])
                {
                    schowek=tab[i][x];
                    tab[i][x]=tab[i][x+1];
                    tab[i][x+1]=schowek;
                }
            }
        }
    }
}

void print(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int tab[4][3]={{1,2,3},{0,-5,8},{9,8,-2},{-3,5,4}};
    print(4,3,tab);
    printf("######\n");
    sortRows(4,3,tab);
    print(4,3,tab);
    return 0;
}
