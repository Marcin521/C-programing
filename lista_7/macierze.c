#include <stdio.h>
#include <stdlib.h>


int main() {

	int n, m;
	
	printf("podaj l wierszy ");
	scanf("%d", &n);
	
	printf("\n podaj l kolumn ");
	scanf("%d", &m);
	
	wczyt(n, m);
	
	return 0;
}

int wczyt(int n, int m){
	
	int a[10][10], i, j;
	
	//wype³nianie macierzy
		for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
		
			printf("\n podaj a[%d, %d] ", i ,j);
			scanf("%d", &a[i][j]);
							
		}
		}
	
	//drukowanie wyniku
		for(i=0; i<m;i++)
		{
			for(j=0; j<n; j++){
				printf(" %d ", a[i][j]);
			}
			printf(" \n");
			
		}
}
