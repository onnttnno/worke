#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x,y;
    printf("Enter two 1-20 : ");
    scanf("%d %d",&x,&y);
    for(i=x;i>=1;i--)
    {
        for(j=y ; j>=1 ;j--)
        {
            printf("(%d,%d)",i,j);
        }
        printf("\n");
    }
    return 0;
}
