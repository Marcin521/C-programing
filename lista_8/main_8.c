#include <stdio.h>
#include <stdlib.h>

/*
Zad. 8.
 
Napisz funkcjê, która znajduje sumê elementów 
oraz sumê wartoœci bezwzglêdnych elementów tablicy.
*/

void suma(int tab[], int *sum){
	
	int i;

	for (i=0; i<5; i++){
	
		if(tab[i] <0) tab[i]*=(-1);
		
		*sum += tab[i];

	}
	
	printf("suma %d", *sum);
}

	int tab1[5] ={8, -32, 3 ,5,6};
	int sum;

int main() {
	
	suma(tab1, &sum);
	return 0;
}
