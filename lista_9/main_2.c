#include <stdio.h>
#include <stdlib.h>

/*Zad. 1. Wype³nij z klawiatury, a nastêpnie wyœwietl na ekranie tablicê struktur zawieraj¹cych informacje o studentach. Informacjami tymi s¹:

znajdŸ max ocene


*/

struct dane{
	char imie[10];
	char nazwisko[10];
	int oceny[10];
};

void Max(int tab[], int n){
	int max, i;
	
	max=tab[0];
	
		printf("max %d", max);
	
	for(i=0; i<n; i++){
		if(max<tab[i]){
			max=tab[i];
		}
	}
	
	printf("max %d", max);
	
}

int main() {
	
	struct dane tab[10];
	
	int i, n;
	n=2;
	
	for(i=0; i<n; i++){
		printf("imie ");
		scanf("%s", &tab[i].imie);
		
		printf("nzawisko ");
		scanf("%s", &tab[i].nazwisko);
		
		printf("oceny ");
		scanf("%s", &tab[i].oceny);
		
	}
	
	//drukuj
	printf(" oceny \n");
	
	for(i=0; i<n; i++){
		printf(" %10s ", tab[i].oceny);		
		
	}
	
	printf("\n ");
	
	Max(tab, &n);
	
	return 0;
}
