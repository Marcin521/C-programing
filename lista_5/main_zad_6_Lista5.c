#include <stdio.h>
#include <stdlib.h>

/* Zad. 6. 
Nale�y wczyta� ci�g liczb rzeczywistych. 
Wczytywanie nale�y zako�czy�, gdy pojawi si� liczba ujemna. 
Obliczy� iloczyn odwrotno�ci wczytanych liczb.*/

int main() {
		
		float liczba, x, iloczyn;
	
		printf("podaj liczbe: ");
		scanf("%f", &liczba);
		
	
		iloczyn=(1/liczba);
			
		if(liczba<=0) return 0;
		
		do
		{		
			printf("podaj liczbe: ");
			scanf("%f", &x);
			
			if(x<=0)
			{
				break;	
			} 
			
			iloczyn*=(1/x);
					
		
		}while(liczba>=0);	
	
	printf("\n iloczyn odwrotnosci: %0.2f \n ", iloczyn);	

	return 0;
}
