#include <stdio.h>
#include <stdlib.h>

//Wariant 454

struct House
{
    char *address;
    int squareMeters;
};

int function(struct House tab[], int n)
{
    int wynik=0;
    int i=0;
    while(i<n)
    {
        if(tab[i].squareMeters > wynik)
        {
            wynik=tab[i].squareMeters;
        }
        i=i+1;
    }
    return wynik;
}

int main()
{
    struct House domek[3];

    domek[0].address="Ketrzynskiego 20";
    domek[0].squareMeters=34;

    domek[1].address="Mineralna 10";
    domek[1].squareMeters=76;

    domek[2].address="Jana Pawla 2";
    domek[2].squareMeters=141;

    printf("%d", function(domek,3));

    return 0;
}
