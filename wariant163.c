#include <stdio.h>
#include <stdlib.h>

// Wariant 163

int isDolar(char t)
{
    char d[]="$";
    for(int i=0;d[i]!='\0';i++)
    {
        if(t==d[i])
        {
            return 1;
        }
    }
    return 0;
}

void cutDolars(char tekst[])
{
    int read=0, write=0;
    while(tekst[read]!='\0')
    {
        if(!isDolar(tekst[read]))
        {
            tekst[write++]=tekst[read];
        }
        read++;
    }
    tekst[write]='\0';
}


int main()
{
    char ttt[]="jfas$$iojdsa$j$";
    cutDolars(ttt);
    printf("%s",ttt);

    return 0;
}
