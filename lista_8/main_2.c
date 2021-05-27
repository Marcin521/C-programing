#include <stdio.h>
#include <stdlib.h>

/*
Zad. 2. 

Zainicjuj tablicê A, a nastêpnie przekopiuj jej niezerowe elementy
do macierzy B.

//macierz A jest kwadratowa
*/

void Copy(int *tab, int m) {

    int b[m];
    int i, j;

    for (i = 0; i < m; i++) {
        
		if(tab[i]=!0){
        	for(j=0; j<m; j++)
			b[j]=tab[i];
		}
        
    }
}

int i, j, m;

int main() {

	printf("wprwowadŸ rozmiar macierzy: ");
    scanf("%d", &m);
	
	for(i = 0; i < m; i++) {
    	for(j = 0; j < m; j++) {

    		printf("%d ", rand()%10);
    	}
    	printf("\n");
	
	return 0;
}
}
