#include <stdio.h>
#include <stdlib.h>

/*Zad. 2. Nale¿y wczytaæ ci¹g liczb rzeczywistych. 
Wczytywanie nale¿y zakoñczyæ, gdy pojawi siê liczba 0. Okreœliæ najwiêksz¹ wczytywan¹ liczbê.*/

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
