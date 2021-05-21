#include <stdio.h>
#include <stdlib.h>
/*
Zad. 8.
 
Napisz funkcjê, która znajduje sumê elementów 
oraz sumê wartoœci bezwzglêdnych elementów tablicy.
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
