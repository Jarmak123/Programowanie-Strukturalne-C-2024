#include <stdio.h>
#include <stdlib.h>

//Wariant 835

int lexComp(char napis[], char napis2[])
{
    char abc[]="abcdefghijklmnoprstuwyz";
    int licznik=0;
    int w_np=0;
    int w_np2=0;
    while(1)
    {
        if(napis==napis2)
        {
            return "Napisy sa takie same";
            break;
        }
        if(napis[licznik]==napis2[licznik])
        {
            licznik=licznik+1;
        }
        else if(napis[licznik]!=napis2[licznik])
        {
            for(int i=0;i<=licznik;i++)
            {
                for(int x=0;abc[x]!='\0';x++)
                {
                    if(napis[i]==abc[x])
                    {
                        w_np=x;
                        break;
                    }
                }
            }

            for(int y=0;y<=licznik;y++)
            {
                for(int b=0;abc[b]!='\0';b++)
                {
                    if(napis2[y]==abc[b])
                    {
                        w_np2=b;
                        break;
                    }
                }
            }
        }
        break;
    }
    if(w_np<w_np2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("Dlugosc naszego slowa to: %d", lexComp("kota","ala"));

    return 0;
}
