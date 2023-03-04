#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    float sn;
    float ps;
    float gain;
    printf("enter the number of sales : ");
    scanf("%f",&sn);
    printf("enter the price of each sale : ");
    scanf("%f",&ps);
    gain = sn*ps;
    printf("the gain is : %.2f",gain);
    return 0;

}
