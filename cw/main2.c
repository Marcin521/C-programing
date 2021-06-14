#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


	
	struct Tablica
	{
		char nazwisko [20];
		char imie [20];
		int numer;
		char tytul [100];
		int liczba;
	
	}tablica[4],t;



	
	FILE *zapis;
	int main()
	{	
	int i, w;
	
	
	
	
	
	for(i=0;i<4;i++)
	{
	
		printf("\npodaj nazwisko  ");
		scanf("%s", &tablica[i].nazwisko);
		
		printf("\npodaj imie  ");
		scanf("%s", &tablica[i].imie);
		
		printf("\n podaj numer telefonu ");
		scanf("%d", &tablica[i].numer);
		
		printf("\npodaj tytul  ");
		scanf("%s", &tablica[i].tytul);
	
	}
	
		zapis=fopen ("d:/kurs.txt", "w");
		fprintf(zapis, "%s.%s.%d.%s\n", tablica[i].nazwisko, tablica[i].imie, tablica[i].numer, tablica[i].tytul);
		fclose(zapis);
		printf("\n\n\n");
		system ("pause");
		
	  	return 0;
	}
