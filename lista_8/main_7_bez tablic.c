#include <stdio.h>
#include <stdlib.h>
/*
Zad. 7.
 
Napisz program, w którym funkcja 
bêdzie zamienia³a wartoœci zmiennych
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
