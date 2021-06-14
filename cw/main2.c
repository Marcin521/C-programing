 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>

	
	struct Tablica
	{
		char nazwisko [20];
		char imie [20];
		int numer;
		char tytul [100];

	
	}tablica[4],t;



	

	int main()
	{	
	
   	FILE *plik; 
	int i, w;
	
	
	
	
	
	for(i=0;i<2;i++)
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

			
		
		int b;
		b=1;
		
		plik =fopen("tekst.txt", "w");
	  	fprintf(plik, "%s.%s.%d.%s\n", tablica[b].nazwisko, tablica[b].imie, tablica[b].numer, tablica[b].tytul);
		fclose(plik);

}
   

	

