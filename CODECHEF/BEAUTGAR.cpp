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
		string s;
		cin.clear();
		cin>>s;
		//cout<<s;
		int r=0,g=0,arr[2]={0};
		int len=s.length();
		//cout<<len;
		for(int i=0;i<len-1;i++)
		{
			if(s[i] == 'R') {arr[0]++; if(s[i+1] == 'R') r++;}
			else {arr[1]++; if(s[i+1] == 'G') g++;}
			//cout<<s[i]<<" ";
		}
		if(s[len-1]=='R') arr[0]++;
		else arr[1]++;
		//cout<<arr[0]<<" "<<arr[1];
		if(arr[0] != arr[1])
		{
			cout<< "no" <<endl;
		}
		else
		{
			//cout<<"in else"<<endl;
			if(len ==2)
			{ 
				if(r==1 || g==1)  cout<< "no" <<endl;
			}
			else if(r>=2 || g>=2) cout<< "no" <<endl;
			else cout<< "yes" <<endl;
		}
	}
	return 0;
}