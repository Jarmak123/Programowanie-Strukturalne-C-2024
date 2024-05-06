#include <stdio.h>
#include <stdlib.h>

void transpose(int n, int tab[n][n])
{
    int schowek;
    int o=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        for(o=0;o<n/2;o++)
        {
                schowek=tab[i][o];
                tab[i][o]=tab[o][i];
                tab[o][i]=schowek;
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
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};


    transpose(3,arr);

    printf("Tablica po transpozycji wierszy:\n");
    print(3,3, arr);

    return 0;
}
