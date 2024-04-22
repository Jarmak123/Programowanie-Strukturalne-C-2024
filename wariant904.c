#include <stdio.h>
#include <stdlib.h>

//Wariant 904

int dlugosc_napisu(char napis[])
{
    char hex[]="123456789aAbBcCdDeEfF";
    int wynik=0;

    for(int i=0;napis[i]!='\0';i++)
    {
        for(int y=0;y<21;y++)
        {
            if(napis[i]==hex[y])
            {
                wynik=wynik+1;
            }
        }
    }
    return wynik;
}

int main()
{
    char nap[]="aaaaaadef234";
    printf("Ilosc znakow hex w podanym napisie wynosi: %d",dlugosc_napisu(nap));
    return 0;
}
