#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;
    printf("Podaj rok: ");
    scanf("%d",&a);

    if((a%4==0 && a%100!=0) || a%400==0)
    {
        printf("\nJest to rok przystepny");
    }
    else
    {
        printf("\nNie jest przystepny");
    }

    return 0;
}
