#include <stdio.h>
#include <stdlib.h>

/* Zad. 7. 
Nale¿y wczytaæ ci¹g liczb rzeczywistych. 
Wczytywanie nale¿y zakoñczyæ, gdy pojawi siê liczba ujemna. 
Dla ka¿dej wczytanej liczby nale¿y obliczyæ jej kwadrat. 
Numer kolejny liczby, tê liczbê oraz jej kwadrat nale¿y wyœwietliæ na ekranie.*/

int main() {
	float x, kwadrat;
	int i=0;
	
		do
		{		
			printf("\n podaj liczbe: ");
			scanf("%f", &x);
				
			kwadrat=x*x;
			i++;
			
			printf("\n liczba: %0.2f ", x);	
			printf("\n kwadrat liczby: %0.2f \n ", kwadrat);				
			printf("numer liczby: %d \n ", i);
			
		}while(x>0);	
	
	
	return 0;
}
