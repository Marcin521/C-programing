#include <stdio.h>
#include <stdlib.h>

/*Zad. 1. Nale�y wczyta� ci�g liczb rzeczywistych. 
Wczytywanie nale�y zako�czy�, gdy pojawi si� liczba 0. Okre�li� najmniejsz� wczytywan� liczb�.*/

int main() {
	
	float liczba, x, min;
	
	printf("podaj liczbe: ");
	scanf("%f", &liczba);
		
	
		min=liczba;
		if(liczba==0) return 0;
		
		do
		{		
			printf("podaj liczbe: ");
			scanf("%f", &x);
			
			if(x==0)
			{
				break;	
			} 
			
			if(min>x){
				min=x;
			}
					
		
		}while(liczba!=0);	
	
	printf("\n min: %0.2f \n ", min);	

			
	return 0;
}
