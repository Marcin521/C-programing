#include <stdio.h>
#include <stdlib.h>
/*
Zad. 7.
 
Napisz program, w kt�rym funkcja 
b�dzie zamienia�a warto�ci zmiennych
*/

void exchenge(int *x, int *y){
	
	int c;
	
	c=*x;
	*x=*y;
	
	*y=c;
	
	printf("x %d", *x);
	printf("\n y %d", *y);
	
}

int x=5;
int y=8;

int main() {
	
	exchenge(&x, &y);
	
	return 0;
}
