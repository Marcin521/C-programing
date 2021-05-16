#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x=0;
	float R, I, E, Rw, U;
	
	printf("podaj E ");
	scanf("%f", &E);
	printf("podaj Rw ");
	scanf("%f", &Rw);
	
	
	printf("\nwybiez pozycje wlacznika \n ");
	printf("\n 1. [-1] (w0) - neutralna");
	printf("\n 2. [0]  (w1) ");
	printf("\n 3. [1]  (w2)\n ");
	
	printf("\npodaj liczbe ");	
	scanf("%d", &x);


		switch (x)
		{
		    case -1:
		  		R=0.56;
		      	break;
		
		    case 0:
		      	R=0.5;
		      	break;
		    
		    
		    case 1:
		      	R=1.3;
			    break;
			
			default: printf("nie mamy takiej mozliwosci");		    
		}
	
	printf("\n==============================");
	printf("\nE to %0.2f ", E);
	printf("R to %0.2f ", R);
	printf("Rw to %0.2f ", Rw);
	printf("\n==============================\n");

	I=E/(R+Rw);
	U=I*R;
	
	printf("\n natezenie %0.2f", I);
	printf("\n napiecie %0.2f", U);
		
	return 0;
}
