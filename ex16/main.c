#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i , l , c , j ;
    
    do {
    printf("enter the number of lines : ");
    scanf("%d",&l);
    printf("enter the number of columes : ");
    scanf("%d",&c);
    }while(l < 0 && c < 0);

    for(i = 1;i <= l; i++)
    {
        for(j = 1;j <= c; j++)
        {
            if (i == 1 || j == 1 || i == l || j == c)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    return (0);
}