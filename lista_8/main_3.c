#include <stdio.h>
#include <stdlib.h>

/*
Zad. 3. 

Napisz funkcjê, która znajduje najwiêksz¹ wartoœæ 
przechowywan¹ w tablicy oraz indeks tej wartoœci.
*/

void Funmax(int tab[], int *max, int *min, int *r){
	
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

	int tab1[5] ={1, 2, 3 ,5,6};
	int i, n, max, min, r;
	

int main() {
	
	for(i=0; i<5; i++){
		
		printf(" %4d", tab1[i]);
		
	}
	
	Funmax(tab1, &max, &min, &r);
	
	printf("\n max=%d, min=%d, roznica=%d", max, min, r);
	printf("\n");
	
	return 0;
}

