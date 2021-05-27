#include <stdio.h>
#include <stdlib.h>

/*
Zad. 1.

Zainicjuj tablicê, a nastêpnie przekopiuj
jej zawartoœæ do dwóch innych tablic.
U¿yj funkcji, wykorzystuj¹cej notacjê wskaŸnikow¹.
*/

void Copy(int *tab, /*int *c, int *b,*/ int m) {

    int c[m];
    int b[m];
    int i;

    for (i = 0; i < m; i++) {
        
		
		c[i] = tab[i];
        printf("c");
		printf(" %d", c[i]);
        b[i] = tab[i];
        printf(" d");
		printf(" %d \n", b[i]);
        
    }
}

	int m, i;

int main() {

	m=5;

	int a[] ={1, 2, 3, 4, 5};

	Copy(a, m);
	
	//printf("%i, %i, ", c, b);
		



	return 0;
}
