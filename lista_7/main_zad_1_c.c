#include <stdio.h>
#include <stdlib.h>

/*
Zad. 1.
W tablicy posiadaj�cej n wierszy i m kolumn przechowywane s� dane o energii elektrycznej 
pobranej w przeci�gu jednego roku. Poszczeg�lne wiersze odpowiadaj� poszczeg�lnym odbiorcom, kolumny � miesi�com. Nale�y:

c.   dla ka�dego odbiorcy okre�li� maksymaln� energi� pobran� w ci�gu jednego miesi�ca,
*/

int main(){

	int a[10][10], max, i, j, n, m;
	
	max=0;
	
	printf("podaj l wierszy ");
	scanf("%d", &n);
	
	printf("\n podaj l kolumn ");
	scanf("%d", &m);
	
	
	
	//wype�nianie macierzy
		for(i=0; i<m; i++){
		
		for(j=0; j<n; j++){
		
			printf("\n podaj a[%d, %d] ", i ,j);
			scanf("%d", &a[i][j]);
			
				if(max<a[i][j]){
					max=a[i][j];		
				}									
									
			}						
		}
	
	printf("\n");
	//drukowanie macierzy
		for(i=0; i<m;i++)
		{
			for(j=0; j<n; j++){
				printf("\n %d ", a[i][j]);
			}
			printf(" \n");
			
		}
	
	printf("\n =======");	
	printf("\n = max %d", max);
	printf("\n = i %d", i);
	printf("\n = j %d", j);
	printf("\n =======");
	
	
	return 0;
}
