#include <stdio.h>
#include <stdlib.h>

/* Zad. 5. 
Nale�y wczyta� ci�g liczb rzeczywistych. 
Wczytywanie nale�y zako�czy�, gdy pojawi si� liczba ujemna. 
Obliczy� sum� odwrotno�ci wczytanych liczb. */

int main() {
		
		float liczba, x, suma;
	
		printf("podaj liczbe: ");
		scanf("%f", &liczba);
		
	
		suma=(1/liczba);

			
		if(liczba<=0) return 0;
		
		do
		{		
			printf("podaj liczbe: ");
			scanf("%f", &x);
			
			if(x<=0)
			{
				break;	
			} 
			suma+=(1/x);
					
		
		}while(liczba>=0);	
	
	printf("\n suma odwrotnosci: %0.2f \n ", suma);	

	return 0;
}
