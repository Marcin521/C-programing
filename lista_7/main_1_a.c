#include <stdio.h>
#include <stdlib.h>

/*Zad. 1. 
W tablicy posiadaj�cej n wierszy i m kolumn przechowywane s� dane o energii elektrycznej pobranej w przeci�gu jednego roku. 
Poszczeg�lne wiersze odpowiadaj� poszczeg�lnym odbiorcom, kolumny � miesi�com. Nale�y:

b.   dla ka�dego odbiorcy okre�li� minimaln� energi� pobran� w ci�gu jednego miesi�ca,
*/

int wczyt(int n,int m);

int main(){
	
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
	
	//wype�nianie macierzy
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

