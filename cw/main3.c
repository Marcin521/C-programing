#include <stdio.h>
#include <stdlib.h>

int wczyt(int n);

int main(){
	
	int n, m;
	
	printf("podaj l kolumn macierz A");
	scanf("%d", &n);
	
	printf("podaj l kolumn macierz B");
	scanf("%d", &m);
	
	
	
	wczyt(n);
	
	wczyt(m);
	
	
	return 0;
}

int wczyt(int n){
	
	int A[n], a;
	
	A[n];
	
	//wype³nianie macierzy
		for(a=0; a<n; a++){
		
			printf("\n podaj [%d] ", a);
			scanf("%d", &A[a]);
							
		}
	
	//drukowanie wyniku
		for(a=0; a<n; a++){
		
			printf("\n podaj [%d] ", a);
							
		}
			printf(" \n");
			
}

