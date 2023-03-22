#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    int t , s , h , m , x;
    printf("enter time in secondes : ");
    scanf("%i",&t);
    x = t % 3600;
    h = t/3600;
    m = x/60;
    s = x % 60;
    printf(" %ih:%im:%is \n", h,m,s);
    return 0;


}
