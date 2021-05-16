#include <stdio.h>
#include <stdlib.h>

//Zad. 6. Dany jest dzieñ i  miesi¹c. 
//Wydrukowaæ nazwê pory roku.

int main() {
	
	int d, m;
	
	printf("podaj dzien: " );
	scanf("%d", &d);
	

	printf("podaj numer numer miesiaca: ");
	scanf("%d", &m);
	
	if(d>0 && m>0 && m<=12)
	{
		switch(m)
		{
			case 1: 	printf("ZIMA");
			break;
			
			case 2: 	printf("ZIMA");
			break;
			
			case 3: 	if(d<=20) printf("ZIMA"); else printf("WIOSNA");
			break;
			 
			
			case 4: 	if(d<31) printf("WIOSNA");
			break;
			
			case 5: 	if(d<28) printf("WIOSNA");
			break;
			
			case 6: 	if(d<=20) printf("WIOSNA"); else printf("LATO");
			break;
			
			case 7: 	if(d>0) printf("LATO");
			break;
			
			case 8: 	if(d>0) printf("LATO");
			break;
			
			case 9: 	if(d<=21) printf("LATO"); else printf("JESIEN");
			break;
			
			case 10: 	if(d>0) printf("JESIEN");
			break;
			
			case 11: 	if(d>0) printf("JESIEN");
			break;
			
			case 12: 	if(d>=20) printf("JESIEN"); else printf("ZIMA");
			break;
		
	} 
		
	}
	
	
	
		
	return 0;
}
