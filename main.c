#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n", i*i);
    }
    return 0;
}
