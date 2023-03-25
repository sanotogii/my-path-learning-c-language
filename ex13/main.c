#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n;
	float i, s;

	do {
		printf("enter a positive number of n : ");
		scanf("%d", &n);
	}while (n < 1);
	s = 0;
	for (i = 1; i <= n; i++)
	{
		s = s + (1 / i);
	
	}
	printf("the sum is : %.2f \n",s);

	return (0);
}
