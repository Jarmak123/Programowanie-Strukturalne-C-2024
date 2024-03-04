#include <stdio.h>
#include <stdlib.h>

int calculateFibonacciRecursively(unsigned int n)
{
    wynik=0;
    if(n==0)
    {
     return wynik;
    }
    else if(n==1)
    {
        return wynik+1;
    }
    else
    {
        int f0=0;
        int f1=1;
        for (int i;i<=5;i++)
        {
            f0=f0+f1
        }
    }

}
int main()
{
    int wynik= calculateFibonacciRecursively(3);
    printf("Wynik to: %d\n",wynik);
    return 0;
}
