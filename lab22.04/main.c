#include <stdio.h>

int isDigit(char c[])
{
    char digits[]="1234567890";
    for(int i=0;c[i]!='\0';i++)
    {
        for(int y=0;digits[y]!='\0';y++)
        {
            if(c[i]==digits[y])
            {
                return 1;
            }
        }
    }
    return 0;
}

void rmDigit(char napis[])
{
    int j,i=0;
    for(int i=0;napis[i]!='\0';i++)
    {
        if()
    }
}

int main() {
    printf("czy to liczba %d",isDigit());
    return 0;
}
