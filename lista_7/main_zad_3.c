#include <stdio.h>
#include <stdlib.h>

/*
Zad. 3. 

Wczytaæ elementy dwóch macierzy kwadratowych o wymiarach n × n 
(n – wczytywane do programu, n ? 10).
Obliczyæ elementy macierzy, bêd¹cej sum¹ wczytanych macierzy.

*/

int main() {
	
	int a[10][10], b[10][10], c[10][10], i, j , n, m;
	
	printf("\n podaj n wierszy ");
	scanf("%d", &n);
	
	if(n>11) return 0;
	
	
	//wype³nianie macierzy
	for(i=0; i<n; i++){
		
		for(j=0; j<n; j++){
		
			printf("\n podaj a[%d, %d] ", i ,j);
			scanf("%d", &a[i][j]);
	
			printf("\n podaj b[%d, %d] ", i ,j);
			scanf("%d", &b[i][j]);
			
			c[i][j]=a[i][j]+b[i][j];						
		}
	}
	
	printf("\n macierz ab \n");
	
	for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++){
				printf(" %d ", a[i][j]);
			}
			printf(" \n");
			
		}
	
	printf("\n macierz b \n");
		
	for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++){
				printf(" %d ", b[i][j]);
			}
			printf(" \n");
			
		}
	
	printf("\n wynik sumowania \n");
	
	//drukowanie wyniku
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++){
				printf(" %d ", c[i][j]);
			}
			printf(" \n");
			
		}
		
		
		
}
