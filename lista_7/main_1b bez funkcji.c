#include <stdio.h>
#include <stdlib.h>

/*Zad. 1. 
W tablicy posiadaj�cej n wierszy i m kolumn przechowywane s� dane o energii elektrycznej pobranej w przeci�gu jednego roku. 
Poszczeg�lne wiersze odpowiadaj� poszczeg�lnym odbiorcom, kolumny � miesi�com. Nale�y:

b.   dla ka�dego odbiorcy okre�li� minimaln� energi� pobran� w ci�gu jednego miesi�ca,
*/


int main(){

	int a[10][10], min, b, i, j, n, m;
	
	min=1000;
	
	printf("podaj l wierszy ");
	scanf("%d", &n);
	
	printf("\n podaj l kolumn ");
	scanf("%d", &m);
	
	
	
	//wype�nianie macierzy
		for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
		
			printf("\n podaj a[%d, %d] ", i ,j);
			scanf("%d", &a[i][j]);
			
			if(min>a[i][j]){
			
				min=a[i][j];
					
			}									
				
				printf("min %d", a[i][j]);
					
			}						
		}
			
	
	//drukowanie macierzy
		for(i=0; i<m;i++)
		{
			for(j=0; j<n; j++){
				printf(" %d ", a[i][j]);
			}
			printf(" \n");
			
		}
	
	return 0;
}
