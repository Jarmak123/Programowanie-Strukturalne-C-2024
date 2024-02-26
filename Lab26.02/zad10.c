#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c;
    printf("Podaj A:");
    scanf("%d",&a);
    int parzysta = (a%2==0) ? "parzysta" : "nieparzysta";

    printf("Twoja liczba jest : %s", parzysta);

    return 0;
}
