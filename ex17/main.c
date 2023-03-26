#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, l, c, j;

    do {
    printf("enter the number of lines : ");
    scanf("%d",&l);
    }while(l < 0);
    c = l;
    for(i = 1;i <= l; i++)
    {
        for(j = 1;j <= c; j++)
        {
            for(j = 1;j <= l-i;j++)
                printf("  ");
            for(j = 1;j <= l ; j++)
                printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return (0);
}