#include <stdio.h>
#include <stdlib.h>

int minColId(int n,int m, int tab[n][m])
{
    int save_index=0;
    int save_sec_index=0;
    int temp=tab[0][0];
    for(int i=0;i<n;i++)
    {
        for(int o=0;o<m;o++)
        {
            if(temp>tab[i][o])
            {
                save_index=i;
                save_sec_index=o;
                temp=tab[i][o];
            }
        }
    }
    return save_index+save_sec_index;
}


int main()
{
    int tab[2][3]={{2,1,3},{5,25,5}};
    printf("%d",minColId(2,3,tab));
    return 0;
}
