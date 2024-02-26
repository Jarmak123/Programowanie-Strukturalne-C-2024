#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int a,b,c;
    int delta;
    printf("Podaj A: ");
    scanf("%d",&a);
    printf("Podaj B: ");
    scanf("%d",&b);
    printf("Podaj C: ");
    scanf("%d",&c);
    delta=((b*b)-((4*a)*c));
    int pierwiastek = sqrt(delta);


    if(delta==0)
    {
        printf("Jest jedno rozwiazanie:");
        printf("X1\n: %d\n",(-b)/(2*a));
    }
    else if(delta>0)
    {
        printf("Sa dwa rozwiazania\n");
        printf("X1:\n %d\n",(-b-pierwiastek)/(2*a));
        printf("X2:\n %d\n",(-b+pierwiastek)/(2*a));
    }
    else if((delta)<0)
    {
        printf("Nie ma rozwiazan");
    }
    printf("%d",pierwiastek);
    return 0;
}
