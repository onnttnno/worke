#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x,y;
    printf("Enter two integers in the rage 1-20 :  ");
    scanf("%d%d",&x,&y);
    i=x;
    do
    {
        j=y;
        do{
                printf("(%d,%d)",x,y);
                j++;

        }while(j>=0);

        i++;
        printf("\n");
    }while(i>=0);
    return 0;
}
