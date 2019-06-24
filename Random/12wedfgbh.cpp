#include<bits/stdc++.h>
using namespace std;
int main(void)
{
int t;
cin>>t;
while(t--)
{
	string s;
	int arr[26];
	memset(arr,0,sizeof(arr));
	cin>>s;
	bool flag1=false,flag=true;
	for(int i=0;i<s.length();i++)
	{
		arr[s[i]-'a']++;
	}

		int count=0;
		for(int i=0;i<26;i++)
		{
			if(arr[i]!=0)
			count++;
		}
		int arr1[count],k=-1;
		for(int i=0;i<26;i++)
		{
			if(arr[i]!=0)
			{
			arr1[++k]=arr[i];
			}
			}
			k++;	
			sort(arr1,arr1+k);
		for(int j;j<k;j++)
		{
			if(arr1[j]!=arr1[j-1]+arr1[j-2])
			{
				flag=false;
				break;	
			}
		}
		if(flag)
		cout<<"Dynamic"<<endl;
		else
		cout<<"Not"<<endl;
	}
	return 0;
}
