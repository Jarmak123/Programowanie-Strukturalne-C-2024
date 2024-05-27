#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

void printPos(struct element * lista)
{
    struct element * wsk = lista->next;
    int i;
    int napis;
    if(wsk!=NULL)
    {
        while(wsk!=NULL)
        {
            napis=wsk->i;
            if(napis>0)
            {
                printf("%d\n",napis);
            }
            wsk=wsk->next;
        }
    }
    else
    {
        printf("Lista jest pusta");
    }
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;
    printPos(lista);
    return 0;
}
