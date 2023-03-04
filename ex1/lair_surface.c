#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	float surface , rayon ;
	const float pi = 3.14 ;
	printf("entre the value of R:");
	scanf("%f", &rayon);
	surface = rayon*rayon*pi;
	printf("lair de cyrcle et :%.2f ",surface);
	return 0;
}
