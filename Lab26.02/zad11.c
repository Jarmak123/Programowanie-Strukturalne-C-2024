#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a,b,c;
    printf("Podaj A:");
    scanf("%f",&a);
    printf("Podaj B:");
    scanf("%f",&b);
    a=round(a);
    b=round(b);
    if(a>b)
    {
        printf("%f",a);
    }
    else if(b>a)
    {
        printf("%f",b);
    }
    else if(a==b)
    {
        printf("sa rowne");
    }

    return 0;
}
