#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], unsigned int size)
{
    int max = numbers[0];
    for(int i=0; i<size;i++)
    {
        if(max<numbers[i])
        {
            max=numbers[i];
        }
    }
    printf("%d\n",max);
}

int main()
{
    int tab[]={1,2,3,4,5,6};
    findMaxValue(tab,6);
    return 0;
}
