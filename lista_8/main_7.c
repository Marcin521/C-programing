#include <stdio.h>
#include <stdlib.h>

/* 
Zad. 7.

 Napisz program, w którym funkcja 
 bêdzie zamienia³a wartoœci zmiennych
*/
void exchange(int A[], int B[]){
	
	int i;
	int rezA[5];
	
	for (i=0; i<5; i++){
	
		rezA[i] = A[i];
		A[i] = B[i];
		
		B[i] = rezA[i]; 
		
	printf(" tab %d", A[i]);
	

	}

	printf("\n");
	
	for (i=0; i<5; i++){
	
	B[i] = rezA[i]; 

	printf(" ntab %d", B[i]);
	
	}
	
	
}

int tab1[5] ={1, 2, 3, 4, 5};
int tab2[5] ={5, 4, 3, 2, 1};

int main() {

	exchange(&tab1, &tab2);
	
	return 0;
}
