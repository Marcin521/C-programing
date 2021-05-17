#include <stdio.h>
#include <stdlib.h>

/*
Zad. 1.
W tablicy posiadaj¹cej n wierszy i m kolumn przechowywane s¹ dane o energii elektrycznej 
pobranej w przeci¹gu jednego roku. Poszczególne wiersze odpowiadaj¹ poszczególnym odbiorcom, kolumny – miesi¹com. Nale¿y:

c.   dla ka¿dego odbiorcy okreœliæ maksymaln¹ energiê pobran¹ w ci¹gu jednego miesi¹ca,
*/

int main(){

	int a[10][10], max, i, j, n, m;
	
	max=0;
	
	printf("podaj l wierszy ");
	scanf("%d", &n);
	
	printf("\n podaj l kolumn ");
	scanf("%d", &m);
	
	
	
	//wype³nianie macierzy
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
