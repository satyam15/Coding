#include <bits/stdc++.h>
using namespace std;
int main () {

  	int t;
    string s1={'c','o','d','e','r','e','d'};
    scanf("%d",&t);
    while(t--)
    {
   		int flag=0;
   		int len,i,j=0;
   		scanf("%d",&len);
   		char s2[len];
 		scanf("%s",s2);
 		if(len>=7)
   		{
   			for(i=0;i<len;i++)
   			{
   				if(s2[i]==s1[j])
   				{
   					j++;
   				}
   				if(j==7)
   				{
   					flag=1;
	   				break;
	   				
   				}
   			}

   		}
	 	else flag=0;
	  	if (flag)
	    printf("yes\n");
	 	 else
	    printf("no\n");
 	}
  return 0;
}
 