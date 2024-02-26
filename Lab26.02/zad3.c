#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ocena;
    printf("Prosze podac ocene: ");
    scanf("%d",&ocena);
    switch(ocena){
        case 1:
            printf("Niedostateczny");
            break;
        case 2:
            printf("Dopuszczajacy");
            break;
        case 3:
            printf("Dostatecny");
            break;
        case 4:
            printf("Dobry");
            break;
        case 5:
            printf("Bardzo dobry");
            break;
        default:
            printf("Error");
            break;

    }
    return 0;
}
