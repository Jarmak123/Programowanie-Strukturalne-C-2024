#include <stdio.h>
#include <stdlib.h>

struct Bicycle{
char *make;
char type[25];
int yearOfManufacture;
int isAvailableForRent;
};

int main()
{
    struct Bicycle rower[3];
    rower[0]=(struct Bicycle){"Cross","Gorski",2021,1};
    rower[1]=(struct Bicycle){"Diament","Miejski",1999,0};
    rower[2]=(struct Bicycle){"Ukraina","Skladak",1982,1};
    for(int i=0;i<3;i++)
    {
        printf("Marka roweru: %s,\nTyp roweru: %s,\nRok produkcji %d,\nDostepnosc: %d\n\n",rower[i].make, rower[i].type,rower[i].yearOfManufacture, rower[i].isAvailableForRent);
    }
    return 0;
}
