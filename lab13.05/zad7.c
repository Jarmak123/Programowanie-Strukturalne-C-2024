#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car
{
    char brand[20];
    int mileage;
};

struct Car initCar(char marka[], int przebieg)
{
    struct Car nowosc;
    strcpy(nowosc.brand,marka);
    nowosc.mileage=przebieg;
    return nowosc;
};

void showCar(struct Car samochod)
{
    printf("%s, %d",samochod.brand, samochod.mileage);
}

void mileageService(struct Car * samochod)
{
    samochod->mileage+=10000;
}

int main()
{
    struct Car samochod = initCar("Merolek B)",12321);
    showCar(samochod);
    mileageService(&samochod);
    printf("\n");
    showCar(samochod);


    return 0;
}
