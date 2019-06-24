#include <stdio.h>
#include <string.h>

int main () {
   char src[50], dest[50];

   fgets(src,50,stdin);
   
	fgets(dest,50,stdin);    

   strcat(dest, src); 
puts(dest);
   printf("|%s|", dest);
   
   return(0);
}
