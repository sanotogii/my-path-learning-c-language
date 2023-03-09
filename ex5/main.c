#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float V , r ;
    const float pi = 3.14 ;
    const float q = 4/3 ;
    printf("~the program that calculate the volume of a sphere~ \n");
    printf("enter the value of r :");
    scanf("%f",&r);
    V = q*pi*pow(r,3);
    printf("the volume equals: %f m^3 \n ", V);
    return 0;

}