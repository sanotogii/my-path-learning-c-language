#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float a , b , add , sub ,mult ,div ;
    printf("enter the value of a : ");
    scanf("%f",&a);
    printf("enter the value of b : ");
    scanf("%f",&b);
    add = a+b;
    sub = a-b;
    div = a/b;
    mult = a*b;
    printf("the addition is      : %.2f \n", add);
    printf("the substitution is  : %.2f \n", sub);
    printf("the multiplication is: %.2f \n", mult);
    printf("the division is      : %.2f \n", div);
    return 0;
}