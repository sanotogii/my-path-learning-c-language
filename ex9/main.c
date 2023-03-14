#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b, m;
    printf("entre a value of a : ");
    scanf("%f",&a);
    printf("entre a value of b : ");
    scanf("%f",&b);
    if (b==0){
        printf("syntaxe error \n");
    }
    else {
        m=a/b;
        printf("la div de a et b est : %.2f \n",m);
    }

    return 0;

}