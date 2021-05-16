#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
//Zad. 1. Odbiór energii elektrycznej mo¿e stanowiæ:
//a) n równolegle po³¹czonych rezystorów o ró¿nych rezystancjach,

int main() {
	
	float R, r;
	int i, n;
	
	R=0;
	
	printf("ile elementow: ");
	scanf("%d", &n);
	
	for( i=0; n>i; i++)
	{
		printf("podaj rezystancje: ");		
		scanf("%f", &r);
				
		R=R+(1/r);
		
	}
	
	printf("argumet impedancji ");
	printf("%f", 1/R);
	
	printf(" modol impedancji %f", 1/R);
	
	return 0;
}
