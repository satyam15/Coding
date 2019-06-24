#include<stdio.h>
#include<string.h>
int main(void)
{
	int i;
	char dna[100];
	scanf("%s",dna);
	for(i=0;i<strlen(dna);i++)
	{
		if(dna[i]=='T')
		dna[i]='A';
		else if(dna[i]=='A')
		dna[i]='T';
		else if(dna[i]=='C')
		dna[i]='G';
		else if(dna[i]=='G')
		dna[i]='C';
	}
	printf("reverse complementary of DNA sequence : %s",dna);
	return 0;
}
