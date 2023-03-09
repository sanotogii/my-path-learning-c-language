#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float a , b ;
    printf("enter the value of a : ");
    scanf("%f",&a);
    printf("enter the value of b : ");
    scanf("%f",&b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("the new value of a : %.2f \n",a);
    printf("the new value of b : %.2f \n",b);
    return 0;
}