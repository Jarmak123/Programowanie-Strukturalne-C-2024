#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a+b;
}

int sumVals(int *a, int *b)
{
    return *a+*b;
}

void addPtr(int *x, int *y, int *z)
{
    *z=*x+*y;
}

void addPtr1(int x, int y, int z)
{
    z=x+y;
}

int main()
{
    int x=10, y=5, z=0;
    printf("Suma liczb x i y to: %d\n",sum(x,y));
    printf("Suma liczb x i y to: %d\n", sumVals(&x,&y));
    addPtr1(x,y,z);
    printf("Suma liczb x i y to: %d\n", z);
    addPtr(&x,&y,&z);
    printf("Suma liczb x i y to: %d\n", z);
    return 0;
}
