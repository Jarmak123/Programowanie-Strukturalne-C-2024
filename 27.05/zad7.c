#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element* next;
};

struct element* createNoHead()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i = 5;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 7;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -4;
    lista->next->next->next = NULL;

    return lista;
}

void printListWithoutHead(struct element * lista)
{
    struct element * wsk = lista->next;
    int i;
    if(wsk!=NULL)
    {
        while(wsk!=NULL)
        {
            printf("%d\n",wsk->i);
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
    struct element *essa = createNoHead();

    printListWithoutHead(essa);


    return 0;
}


