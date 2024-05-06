#include <stdio.h>
#include <stdlib.h>

//Wariant 255

int sum_2D(int n, int m, int tab[n][m])
{
    int wynik=0;

    for(int i=0;i<n;i++)
    {
        for(int o=0;o<m;o++)
        {
            if(tab[i][o]%3==0)
            {
                wynik=wynik+tab[i][o];
            }
        }
    }
    return wynik;
}

int main()
{
    int tablica[2][3]={{1,2,3},{2,6,12}};
    printf("Suma liczb podzielnych przez 3 w naszej tabeli 2D to: %d", sum_2D(2,3,tablica));
    return 0;
}
