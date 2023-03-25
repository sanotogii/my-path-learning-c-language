#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	int n;
	float i, s;

	do {
		printf("enter a positive number of n : ");
		scanf("%d", &n);
	}while (n < 1);
	s = 0;
	for (i = 0; i <= n; i++)
	{
		s = s + pow(10,i);
	
	}
	printf("the sum is : %.0f \n",s);

	return (0);
}
