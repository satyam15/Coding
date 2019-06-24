#include<stdio.h>
#include<string.h>
int main(void)
{
	int t,i,j,d,n,m=-1,flag=0;
	char a1[26],b1[26],ac;
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<26;i++)
		{
			a1[i]='\0';
			b1[i]='\0';
		}
		flag=0;
		m=-1;
		scanf("%d%d\n",&d,&n);
		scanf("%s",a1);
		for(i=0;i<d;i++)
		{
		flag=0;
		ac='a'+i;
		for(j=0;j<strlen(a1);j++)
		{
		if(a1[j]==ac)
	    {
	    	flag=1;
	    	break;
		}
	    }
	    if(flag==0)
	    {
	   	printf("%c",ac);
	    b1[++m]=ac;
		}
	}
		for(j=0;j<n;j++)
		printf("%s",b1);
		printf("\n");
	
	}
}
