#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c;
    printf("Podaj 3 liczby a,b,c\nA:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);

    if(a>=b && a>=c)
    {
        printf("Najwieksza to %d", a);
    }
    else if(b>=a && b>=c)
    {
        printf("Najwieksza to %d", b);
    }
    else if(c>=b && c>=a)
    {
        printf("Najwieksza to %d", c);
    }

    return 0;
}
