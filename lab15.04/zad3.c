#include <stdio.h>
#include <stdlib.h>

//Wariant 835

int countVow(char napis[])
{
    char samogloski[]="aeiyou";
    int wynik=0;
    for(int i=0;napis[i]!='\0';i++)
    {
        for(int x=0;samogloski[x]!='\0';x++)
        {
            if(napis[i]==samogloski[x])
            {
                wynik=wynik+1;
            }
        }
    }
    return wynik;
}

int main()
{
    printf("Dlugosc naszego slowa to: %d", countVow("kapitan bomba"));

    return 0;
}
