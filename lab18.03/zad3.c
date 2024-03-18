#include <stdio.h>

int operation(int x)
{
    return x;
}

int calculate(int number, int (*wsk_operation)(int a))
{
    int wynik=wsk_operation(number);
    return wynik;
}

int main() {

    printf("Wynik: %d",calculate(2,operation));

    return 0;
}
