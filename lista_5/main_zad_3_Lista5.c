#include <stdio.h>
#include <stdlib.h>

/*Zad. 3. Nale¿y wczytaæ ci¹g liczb rzeczywistych. 
Wczytywanie nale¿y zakoñczyæ, gdy pojawi siê liczba 0. 
Obliczyæ sumê wczytanych liczb.*/

int main() 
{
	float liczba, x, min, suma;

	
	printf("podaj liczbe: ");
	scanf("%f", &x);
		
	
		suma=x;
		if(x==0){
			
			printf("koniec zadania");	
		
		}else{
			do
			{		
				printf("podaj liczbe: ");
				scanf("%f", &x);	
			 
				suma+=x;		
		
			}while(x!=0);	
	
		printf("\n suma: %0.2f \n ", suma);	
		
		}
	
	
	return 0;
}
