#include <stdio.h>
#include <stdlib.h>

/*
Zad. 1.

Zainicjuj tablic�, a nast�pnie przekopiuj
jej zawarto�� do dw�ch innych tablic.
U�yj funkcji, wykorzystuj�cej notacj� wska�nikow�.
*/

void Copy(int *tab, /*int *c, int *b,*/ int m) {

    int c[5];
    int b[5];
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


int main() {

	int m, i;
	m=5;

	int a[] ={1, 2, 3, 4, 5};

	Copy(a, m);
	
	//printf("%i, %i, ", c, b);
		



	return 0;
}
