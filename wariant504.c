#include <stdio.h>
#include <stdlib.h>
//Wariant 504
double find_min_pointed_numbers(double *const num1, const double *num2)
{
    if(*num1<*num2)
    {
        return *num1;
    }
    else
    {
        return *num2;
    }
}

int main()
{
    double x = 30;
    double y = 20;
    printf("Hello world!\n");
    printf("Mniejsza wartosc z liczb x i y to: %lf\n",find_min_pointed_numbers(&x,&y));
    return 0;
}
