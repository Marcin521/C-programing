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
			
			b[i]=tab[i];
			printf(" %d", b[j]);
		}
        
    }
}

int i, j, m;


int main() {

	printf("wprwowadŸ rozmiar macierzy: ");
    scanf("%d", &m);

	int a[m];
	
	for(i = 0; i < m; i++) {
    	for(j = 0; j < m; j++) {

    		printf("%d ", rand()%10);
    		a[j]=rand()%10;
    	}
    	printf("\n");	
	
	}

	printf("\n");
	
	Copy(a, m);

	return 0;

}
