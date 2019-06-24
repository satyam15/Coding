#include <bits/stdc++.h> 
using namespace std; 
int total = 62;
int change(string &str) 
{ 
	int n = str.length(); 
	if (n > total) 
	return -1; 
	int dif = 0; 
	int count[total] = {0}; 
	for (int i = 0; i < n; i++) { 
	int x=str[i];
	if(x<=122&&x>=97)
	{
		if (count[x-'='] == 0) 
		dif++;
		count[x-'=']++; 
	}
	else if(x>=65&&x<=90)
	{
	if (count[x- '7'] == 0) 
			dif++; 
		count[(x - '7')]++;	
	}
	else if(x>=0&&x<=9)
	if(count[x-'0']==0)
		dif++;
	count[x-'0']++;
	} 
	int ans=62-dif;
	if(dif<=ans)
	return ans;
	else -1; 
} 
int main() 
{ 
	string str;
	cin>>str;
	cout << change(str); 
	return 0; 
} 

