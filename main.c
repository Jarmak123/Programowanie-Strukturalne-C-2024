#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*i);
    }
    printf("\nsuma to: %d",sum);
    return 0;
}
