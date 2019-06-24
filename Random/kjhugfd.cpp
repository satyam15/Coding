#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char w[50];
    char s[400];
         fgets(s,400,stdin);

    scanf("%c",&c);
    scanf("%s",w);

    printf("%c\n",c);
    puts(w);
    puts(s);   
    return 0;
}
