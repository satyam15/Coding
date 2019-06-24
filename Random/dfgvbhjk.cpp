#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    char w[50];
    char s[400];
    scanf("%c",&c);
    scanf("%s",w);
    fgets(s,400,stdin);
    printf("%c\n",c);
    puts(w);
    puts(s);   
    return 0;
}
