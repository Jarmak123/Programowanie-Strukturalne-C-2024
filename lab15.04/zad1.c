#include <stdio.h>
#include <stdlib.h>

//Wariant 835

int length(char napis[])
{
    int wynik=0;
    for(int i=0;napis[i]!='\0';i++)
    {
        wynik=wynik+1;
    }
    return wynik;
}

int main()
{
    printf("Dlugosc naszego slowa to: %d", length("krecik"));

    return 0;
}
