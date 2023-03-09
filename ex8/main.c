#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    float a,b,x,y;
    float AB;
    printf("enter the coordinates of A : ");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("enter the coordinates of B : ");
    scanf("%f",&x);
    scanf("%f",&y);
    AB = sqrt(pow(b-a,2)+pow(y-x,2));
    printf("the distance is : %.0f \n", AB);
    return 0;
}