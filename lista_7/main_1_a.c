#include <stdio.h>
#include <stdlib.h>

/*
Zad. 1. W tablicy posiadaj�cej n wierszy i m kolumn przechowywane s� dane o energii 
elektrycznej pobranej w przeci�gu jednego roku. Poszczeg�lne wiersze odpowiadaj� poszczeg�lnym odbiorcom, 
kolumny � miesi�com. Nale�y:

a.   dla ka�dego odbiorcy obliczy� energi� pobran� w ci�gu ca�ego roku,
*/

int main() {
	
	int a[10][10], b[10][10], c, d[10][10], i, j , n, m, od, k;
	
	c=0;
	
	printf(" podaj liczbe odbiorc�w ");
	scanf("%d", &od);
	
	printf(" podaj l wierszy ");
	scanf("%d", &n);
	
	printf("\n podaj l kolumn ");
	scanf("%d", &m);
	
	
	
	for(k=0; od>k; k++){
		//wype�nianie macierzy
		for(i=0; i<m; i++){
			
			for(j=0; j<m; j++){
			
				printf("\n podaj a[%d, %d] ", i ,j);
				scanf("%d", &a[i][j]);
		
				c=a[i][j] + c;
				
				
			}
		}
		
	
		
		/*for(i=0; i<m;i++)
			{
				for(j=0; j<n; j++){
					printf(" %d ", c[i][j]);
	
				}
				printf(" \n");
				
			}*/
			
				
		}
	
	

	
	
	return 0;
}
