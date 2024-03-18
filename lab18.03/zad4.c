#include <stdio.h>

int func(int x)
{
    return x;
}


void applyFunction(int(*wsk_func)(int a), int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        printf("%d\n",wsk_func(i));
    }
}

int main() {

    applyFunction(func,0,3);

    return 0;
}
