#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x,y;
    printf("Enter two integers in the rage 1-20 :  ");
    scanf("%d%d",&x,&y);
    i=1;
    while(i<=y)
    {
        j=1;
        while(j<=x){
                printf("@");
                j++;

        }

        i++;
        printf("\n");
    }
    return 0;
}
