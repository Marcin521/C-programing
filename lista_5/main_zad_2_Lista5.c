#include <stdio.h>
#include <stdlib.h>

/*Zad. 2. Nale�y wczyta� ci�g liczb rzeczywistych. 
Wczytywanie nale�y zako�czy�, gdy pojawi si� liczba 0. Okre�li� najwi�ksz� wczytywan� liczb�.*/

int main() {
	float liczba, x, max;
	
	printf("podaj liczbe: ");
	scanf("%f", &liczba);
		
	
		max=liczba;
		if(liczba==0) return 0;
		do
		{		
			printf("podaj liczbe: ");
			scanf("%f", &x);
			
			if(x==0)
			{
				break;	
			} 
			
			if(max<x){
				max=x;
			}
			
					
		
		}while(liczba!=0);	
	
	printf("\n max: %0.2f \n ", max);	

			
	return 0;
}
