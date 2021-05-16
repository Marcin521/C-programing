#include <stdio.h>
#include <stdlib.h>

/* Zad. 4. 
Nale¿y wczytaæ ci¹g liczb rzeczywistych. 
Wczytywanie nale¿y zakoñczyæ, gdy pojawi siê liczba 0. 
Obliczyæ iloczyn wczytanych liczb.*/

int main() {
		
	float liczba, x, iloczyn;
	
	printf("podaj liczbe: ");
	scanf("%f", &liczba);
		
	
		iloczyn=liczba;
		if(liczba==0) return 0;
		
		do
		{		
			printf("podaj liczbe: ");
			scanf("%f", &x);
			
			if(x==0)
			{
				break;	
			} 
			
			iloczyn*=x;
					
		
		}while(liczba!=0);	
	
	printf("\n iloczyn: %0.2f \n ", iloczyn);	

	
	return 0;
}
