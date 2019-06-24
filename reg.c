#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char regex[100],input[100];
int len,len1,i,j,k,l;
char copy[200];
int check=0,ans=0;
int bracket[200];

void calc(){
	check=0;
	for(i=0;i<len;i++){
		if(check!=0)
			bracket[i]=check;
		if(regex[i]=='(')
			check=i;
		if(regex[i]==')')
            check=0;
	}
	check=0;
}

int strcmpp(char copy1[],char copy2[]){
    int len1=strlen(copy1);
    int len2=strlen(copy2);
    if(len1!=len2)
        return -1;
    for(i=0;i<len1;i++)
        if(copy1[i]!=copy2[i]&&copy1[i]!='.'&&copy2[i]!='.')
            return -1; 
    return 0;
}

void fun(int ind,int pointer){
	if(ans==1) return;

	if(pointer==len1&&ind==len){
		if(strcmpp(copy,input)==0)
           ans=1;
        return ;
	}

    if(ind>=len||pointer>=len1)
    	return ;

    if(regex[ind]=='('){
    	check=1;
    	fun(ind+1,pointer);
    	check=0;
    }
    else if(regex[ind]==')'){
    	check=0;
    	fun(ind+1,pointer);
    }
    else if(regex[ind]=='*'){
    	
    	char copyy[200];
        if(regex[ind-1]==')'){
        	int length=0;
           for(i=bracket[ind-1]+1;i<ind-1;i++)
           	copyy[length++]=regex[i];
            copyy[length]='\0';
        }
        else{
            copyy[0]=regex[ind-1];
            copyy[1]='\0';
        }
        int pointerr=pointer;
        int length=strlen(copyy);
        for(i=0;;i++){
             if(i==0){
             	fun(ind+1,pointerr);
                continue;
             }
             	for(k=0;k<length;k++)
             		copy[pointerr++]=copyy[k];
             	copy[pointerr]='\0';
             if(pointerr>len1)
             	break;
             fun(ind+1,pointerr);	
             
        }
        
    }
    else if(regex[ind]=='+'){
       	char copyy[200];
        if(regex[ind-1]==')'){
        	int length=0;
           for(i=bracket[ind-1]+1;i<ind-1;i++)
           	copyy[length++]=regex[i];
            copyy[length]='\0';
        }
        else{
            copyy[0]=regex[ind-1];
            copyy[1]='\0';
        }
        int pointerr=pointer;
        int length=strlen(copyy);
        for(i=0;;i++){
             for(k=0;k<length;k++)
             		copy[pointerr++]=copyy[k];
             	copy[pointerr]='\0';
             if(pointerr>len1)
             	break;
             fun(ind+1,pointerr);	
             
        }
         	
     }
    else{
    	if(check==0){
    		if(ind<len-1&&(regex[ind+1]=='*'||regex[ind+1]=='+'))
               fun(ind+1,pointer);
    		else{
    		   copy[pointer]=regex[ind];
    		   copy[pointer+1]='\0';
    		   fun(ind+1,pointer+1);
    		   }
    	}
    	else 
    		fun(ind+1,pointer);
    }
}

int main(){

	copy[0]='\0';

    printf("enter regex expression\n");
    scanf("%s",regex);

    printf("enter input\n");
    scanf("%s",input);

    len=strlen(regex);
    len1=strlen(input);

    calc();check=0;ans=0;

    fun(0,0);

    if(ans==1)
    	printf("string accepted\n");
    else
    	printf("string not accepted\n");

	return 0;
}
