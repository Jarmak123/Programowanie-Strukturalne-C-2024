#include <stdio.h>
#include <stdlib.h>

void revRowArr(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) {
        // Odwrócenie elementów w ka¿dym wierszu
        for (int j = 0; j < m/2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][m-j-1];
            arr[i][m -j- 1] = temp;
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
    int n = 3;
    int m = 3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};


    revRowArr(n, m, arr);

    printf("Tablica po odwróceniu wierszy:\n");
    print(n, m, arr);

    return 0;
}
