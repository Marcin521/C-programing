#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Zad. 1. W tablicy posiadaj�cej n wierszy i m kolumn przechowywane s� dane o energii elektrycznej pobranej w przeci�gu jednego roku.
Poszczeg�lne wiersze odpowiadaj� poszczeg�lnym odbiorcom, kolumny � miesi�com. Nale�y:

a.   dla ka�dego odbiorcy obliczy� energi� pobran� w ci�gu ca�ego roku,
*/

int main() {
	
	int a[10][10], b[10][10], c[10][10], i, j , n, m;
	
	printf("\n podaj l wierszy ");
	scanf("%d", &n);
	
	printf("\n podaj l kolumn ");
	scanf("%d", &m);
	
	
	printf("\n n %d ", n);
	printf("\n m %d ", m);
	
	//wype�nianie macierzy
	for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
		
			printf("\n podaj a[%d, %d] ", i ,j);
			scanf("%d", &a[i][j]);
	
			printf("\n podaj b[%d, %d] ", i ,j);
			scanf("%d", &b[i][j]);
			
			c[i][j]=a[i][j]+b[i][j];						
		}
	}
	
	//drukowanie wyniku
		for(i=0; i<m;i++)
		{
			for(j=0; j<n; j++){
				printf(" %d ", c[i][j]);
			}
			printf(" \n");
			
		}
	
	


	
	
	return 0;
}
