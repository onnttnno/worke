#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&x,&y);
    printf(" Enter operator(+,-): ");
    scanf("%c%c",&b,&a);
    //printf("%d\n",a);
        if(a=='+')
    {
        printf("result:%d + %d= %d",x,y,x+y);
    }
    else if(a=='-')
    {
        printf("result:%d - %d= %d",x,y,x-y);
    }
    return 0;
}
