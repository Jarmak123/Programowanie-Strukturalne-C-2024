#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b;
    printf("Podaj A: ");
    scanf("%d",&a);
    printf("\nPodaj B: ");
    scanf("%d",&b);

    if((a+b)%2==0)
    {
        printf("Suma tych liczb jest parzysta");
    }
    else
    {
        printf("Suma tych liczb nie jest parzysta");
    }

    return 0;
}
