#include <stdio.h>
#include <stdlib.h>

/*
Zad. 1.

Zainicjuj tablicê, a nastêpnie przekopiuj 
jej zawartoœæ do dwóch innych tablic. 
U¿yj funkcji, wykorzystuj¹cej notacjê wskaŸnikow¹.
*/

/*void Funmax(int tab[], int *max, int *min, int *r){
	
	int i;
	
	*max = tab[0];
	*min = tab[0];
	
		for (i=1; i<5; i++){
			
			if(tab[i]> *max)
			*max=tab[i];
			
			if(tab[i] < *min) 
			*min = tab[i];
		 
		}
	
	*r = *max- *min;
	
} 
*/

	int i, n, max, min, r;
	int b[5];
	int c[5];

int main() {
	
	int *a[5] ={1, 2, 3 ,5,6};	
	c[5]= &a;
	b[5]= &a;
	
	for(i=0; i<5; i++){
		
		printf("\n %4d", a[i]);
		printf(" %4d", b[i]);
		
	}
	
	return 0;
}

