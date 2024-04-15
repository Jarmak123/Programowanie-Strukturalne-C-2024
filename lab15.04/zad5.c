#include <stdio.h>
#include <stdlib.h>

//Wariant 835

#include <stdio.h>

int lexComp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1;
        }
        if (str1[i] < str2[i]) {
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] != '\0') {
        return 0;
    }
    if (str1[i] != '\0' && str2[i] == '\0') {
        return 1;
    }

    return 0;
}


int main()
{
    printf("Dlugosc naszego slowa to: %d", lexComp("kota","ala"));

    return 0;
}
