#include <stdio.h>
#include <stdlib.h>

void multi(int n)
{
    int i;
    i = 0;

    while (i <11)
    {
        printf("%d * %d = %d \n", n, i,(i * n));
        i++;
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