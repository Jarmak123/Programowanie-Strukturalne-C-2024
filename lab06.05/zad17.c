#include <stdio.h>
#include <stdlib.h>

void swap2nd(int n, int m , int tab[n][m])
{
    if(n>=4)
    {
        int schowek;
        for(int i=0;i<m;i++)
        {
            schowek=tab[1][i];
            tab[1][i]=tab[n-2][i];
            tab[n-2][i]=schowek;
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

int main() {
    int arr[4][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}};

    printf("Tablica przed zamiana wierszy:\n");
    print(4,3, arr);

    swap2nd(4,3,arr);

    printf("Tablica po zamianie wierszy:\n");
    print(4,3, arr);

    return 0;
}
