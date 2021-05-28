#include <stdio.h>
#include <stdlib.h>

/*Zad. 1. Wype³nij z klawiatury, a nastêpnie wyœwietl na ekranie tablicê struktur zawieraj¹cych informacje o studentach. Informacjami tymi s¹:

–  nazwisko i imiê studenta,
–  rok studiów,
–  nr grupy,


*/

struct dane{
	char imie[10];
	char nazwisko[10];
	int grupa[10];
};

int main() {
	
	struct dane tab[10];
	
	int i, n;
	
	for(i=0; i<n; i++){
		printf("imie ");
		scanf("%s", &tab[i].imie);
		
		printf("nzawisko ");
		scanf("%s", &tab[i].nazwisko);
		
		printf("grupa ");
		scanf("%s", &tab[i].grupa);
		
	}
	
	//drukuj
	
	printf(" Imie Nazwisko grupa \n");
	
	for(i=0; i<n; i++){
		
		printf("%10s %10s %10s ", 
		tab[i].imie, tab[i].nazwisko, tab[i].grupa);		
		
	}
	
	return 0;
}
