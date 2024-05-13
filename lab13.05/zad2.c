#include <stdio.h>
#include <stdlib.h>

struct Student
{
char firstName[50];
char lastName[50];
int id;
float gpa;
};

int main()
{
    struct Student studenci[3];
    studenci[0]=(struct Student){"Tomasz","Dzialowy",1,3.25};
    studenci[1]=(struct Student){"Alicja","Galczynska",2,4.52};
    studenci[2]=(struct Student){"Gerwazy","Rivia",3,4.2};

    int tab[3][4]={
    {studenci[0].firstName,studenci[0].lastName,studenci[0].id,studenci[0].gpa},
    {studenci[1].firstName,studenci[1].lastName,studenci[1].id,studenci[1].gpa},
    {studenci[2].firstName,studenci[2].lastName,studenci[2].id,studenci[2].gpa}};

    printf("Imie:%s, Nazwisko:%s, ID:%d, GPA:%f",studenci[0].firstName,studenci[0].lastName,studenci[0].id,studenci[0].gpa);
    return 0;
}
