#include <stdio.h>
#include <stdlib.h>

/*Zad. 1. Wype�nij z klawiatury, a nast�pnie wy�wietl na ekranie tablic� struktur zawieraj�cych informacje o studentach. Informacjami tymi s�:

�  nazwisko i imi� studenta,
�  rok studi�w,
�  nr grupy,


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
