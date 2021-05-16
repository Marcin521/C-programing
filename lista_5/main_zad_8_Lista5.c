#include <stdio.h>
#include <stdlib.h>

/*Zad. 8. Tak jak w zadaniu 7, 
lecz zamiast kwadratu nale¿y 
wyœwietliæ szeœcian wczytywanych liczb.*/

int main() {
	
	float liczba, x, kwadrat;
	int i=1;
	
		do
		{		
			printf("\n podaj liczbe: ");
			scanf("%f", &x);
			
				if(x<=0)
				{
					break;	
				} 
				
			kwadrat=x*x*x;
			i++;
			
			printf("\n kwadrat liczby: %0.2f \n ", kwadrat);				
			printf("numer kolejnej liczby: %d \n ", i);
			
		}while(liczba>=0);	
	
	return 0;
}
