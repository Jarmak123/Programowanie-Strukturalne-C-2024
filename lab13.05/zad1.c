#include <stdio.h>
#include <stdlib.h>

struct Car
{
char *brand;
char model[20];
int isAvailable;

};

int main()
{
    struct Car samochod[3];
    samochod[0]=(struct Car){"Fiat","126p",1};
    samochod[1]=(struct Car){"Lexus","IS200",0};
    samochod[2]=(struct Car){"Mercedes-Benz","w209",1};
    for(int i=0;i<3;i++)
    {
        printf("Marka: %s,\nModel: %s,\nDostepnosc:%d\n\n",samochod[i].brand,samochod[i].model,samochod[i].isAvailable);
    }
    return 0;
}
