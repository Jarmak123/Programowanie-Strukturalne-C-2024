#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        suma=suma+(i*i);
    }
    printf("\nsuma to: %d",suma);
    return 0;
}
