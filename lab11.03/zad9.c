#include <stdio.h>
#include <stdlib.h>

void sqrCopy(const int *a, int *b)
{
    *b=(*a)*(*a);
}

int main()
{
    int a=2, b=0;
    sqrCopy(&a,&b);
    printf("Potega %d", b);
    return 0;
}
