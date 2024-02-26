#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c;
    printf("Podaj 3 liczby a,b,c\nA:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);

    if(a<b)
    {
        printf("Najwieksza to %d", a);
    }
    else if(b<a)
    {
        printf("Najwieksza to %d", b);
    }
    else if(a==b)
    {
        printf("Najwieksza to %d", a);
    }

    return 0;
}
