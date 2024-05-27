#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element* next;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->x=5;
    lista->next = malloc(sizeof(struct element));
    lista->next->x=7;
    lista->next->next= malloc(sizeof(struct element));
    lista->next->next->x=-4;
    lista->next->next->next=NULL;

    struct element * wsk = lista;
    while(wsk!=NULL)
    {
        printf("%d\n", wsk->x);
        wsk=wsk->next;
    }

    return 0;
}
