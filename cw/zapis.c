 #include <stdio.h>
 #include <stdlib.h>
 #include <errno.h>


 
 int main ()
 {
   FILE *plik; /* u¿ywamy metody wysokopoziomowej - musimy mieæ zatem identyfikator pliku, uwaga na gwiazdkê! */
   
   char tekst[] = "Hello 123 world";
  
  	plik =fopen("tekst.txt", "w");
  	fprintf(plik, "%s", tekst);
  	
  	fclose(plik);


}
   

