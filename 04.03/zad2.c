#include <stdio.h>
#include <stdlib.h>

float calculateAbsolute(float a)
{
    if(a<0)
    {
        a=a*-1;
    }
    return a;
}

int main()
{
    printf("Hello world!\n");
    float wynik = calculateAbsolute(-1.25);
    float wynik2 = calculateAbsolute(-2.1);
    printf("Wynik1 to: %f, wynik2 to: %f",wynik, wynik2);
    return 0;
}
