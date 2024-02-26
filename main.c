#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Podaj liczbe A ");
    scanf("%f", &a);
    printf("Podaj liczbe B ");
    scanf("%f", &b);
    printf("Podaj liczbe C ");
    scanf("%f", &c);

   printf("Odpowiedü wyrazenia c-((b-2*a)/(4+a)) to %f",c-((b-2*a)/(4+a)));
    return 0;
}
