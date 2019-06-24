#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define ff first
#define ss second
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		cin.clear();
		string s;
		int a=0,b=0,b1=0,flag=-1;
		int arr1[26],arr2[26];
		memset(arr1,0,sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			arr1[s[i]-'a']++;
			//arr2[s[i]-'A']++;
		}
		// for(int i=0;i<26;i++)
		// {
		// 	arr1[i]+=arr2[i];
		// }
		for(int i=0;i<26;i++)
		{
			if(arr1[i]>1){
				cout<<"no"<<endl;
				flag=0;
				break;
			}
		}
		if(flag !=0){
		for(int i=0;i<26;i++)
		{

			if(arr1[i]==1) {a=i;  break;}
			
			
		}
		int temp=a;
		for(int i=a;i<26;i++)
		{
			if(arr1[i]>1){
				b1=1;
				break;
			}
			else
			{
				if(arr1[i]==0){
					a=i;
					break;
				}
			}
		}
		if(b1==0)
		{
			if(temp!=a){
			for(int i=a;i<26;i++)
			{
				if(arr1[i]>0){
					b1=1;
					break;
				}
			}}
		}
		if(b1 == 1) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
	}
	return 0;
}