#include <stdio.h>
#include <stdlib.h>
void power(int n)
{
    scanf("the square of %d is %d \n",n, (n * n) );
}
int main(void)
{
    int a;
    scanf("enter a value of a :");
    scanf("%d", &a);
    power(a);
    return (0);
}