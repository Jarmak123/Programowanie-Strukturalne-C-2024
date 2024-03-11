#include <stdio.h>
#include <stdlib.h>

float initFloats()
{
    float *a=malloc(4.5);
    float *b=malloc(2.3);
    float *c=malloc(-4.2);
    return *a;
}

int main()
{
    float a,b,c = 0;
    initFloats();
    printf("Wynik: %d, %d, %d", &a,&b,&c);

    return 0;
}
