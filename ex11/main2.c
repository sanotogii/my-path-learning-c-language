#include <stdio.h>
#include <stdlib.h>

void multi(int n)
{
    int i;
    i = 0;

    for (i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i,(i * n));
    }
}

int main(void)
{
    int n;

    printf("enter a value of n : ");
    scanf("%d", &n);

    multi(n);
    return (0);
}