#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w)
{
    *w=x;
}


int main()
{
    int w=0;
    copyInt(2,&w);
    printf("Wynik: %d", w);

    return 0;
}
