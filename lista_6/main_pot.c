#include <stdio.h>
#include <stdlib.h>

float pot(float x, int y);

int main() {
	
	float wynik, x;
	int y;
	
	printf("podaj x ", pot);
	scanf("%f", &x);
	
	printf("podaj y ");
	scanf("%d", &y);
		
	pot(x,y);
	
	return 0;
}

float pot(float x, int y){
	
	float wynik =1;
	float i;
	
	if(x==0){ 
		wynik=0;
	}else 
	
	for(i=0; i<y; i++){
		wynik*=x;
	} 
	
	printf("wynik %0.2f ", wynik);
}

