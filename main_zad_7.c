#include <stdio.h>
#include <stdlib.h>

//Zad. 7. Nale¿y wczytaæ z klawiatury liczbê naturaln¹ n (n L 100), 
//okreœlaj¹c¹ wiek pewnej osoby w latach. Wiek ten ma byæ wyœwietlony na ekranie monitora ³¹cznie z odpowiednim s³owem “rok”, “lata” lub “lat”, np. 1 rok, 3 lata, 18 lat, 43 lata itd.

int main() {
	
	int w;
	
	printf("podaj wiek: ");
	scanf("%d", &w);
	
	if(w<0){
		printf("bledny wiek");
		return 0;	
	}else
	
	if(w == 1){
		printf(" %d ", w);
		printf(" ROK");
			    
	} 	    
	
	if(w<=2 || w<=4){
		printf(" %d ", w);
		printf(" LATA");
	}
		  	
	if(w>4){
		printf(" %d ", w);
		printf(" LAT");
	}
	
	return 0;
}
