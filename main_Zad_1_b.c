#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
//Zad. 1. Odbi�r energii elektrycznej mo�e stanowi�:
//b) rezystor o rezystancji R1 po��czony szeregowo z n r�wnolegle po��czonymi rezystorami o jednakowej rezystancji R


int main() {
	
	float R, Rz, R1, r, wynik;
	int i, n;
	
	R=0;
	
		printf("ile rezystorow rownolegle: ");
		scanf("%d", &n);
		
			for( i=0; n>i; i++)
			{
				printf("podaj rezystancje: ");		
				scanf("%f", &r);
					
				R=R+(1/r);		
			
			}
		
		printf("podaj R1 (szeregowo) ");
		scanf("%f", &R1);
		
			Rz=(1/R)+R1;
				
		
			
		printf(" argumet impedancji %f", Rz);
		
		printf(" modol impedancji %f", Rz);
		
		return 0;
}
