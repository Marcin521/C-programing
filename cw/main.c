#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i, b;
	int X;

	
	b=0;
	i=1;

	printf("podaj liczbe: " );
	scanf("%d", &X);
	
	while(X!=3)
	{
		printf("podaj liczbe: " );
		scanf("%d", &X);
		i++;
	} 
	
	printf("podaj liczbe: " );
	scanf("%d", &X);
	
	while(X!=3){
		
		printf("podaj liczbe: " );
		scanf("%d", &X);
		b++;
	
		printf("%d", b );
	
	}
	
	
		
		
		
	return 0;
}
