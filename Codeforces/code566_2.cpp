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
int tot=0,h,w;
char pic[510][510];
bool fun(int i,int j)
{
	int a,b,c,d;
	a=b=i;
	c=d=j;
	while(pic[a-1][j]=='*') a--;
	while(pic[b+1][j]=='*') b++;
	while(pic[i][c+1]=='*') c++;
	while(pic[i][d-1]=='*') d--;
	return (b-a+1+c-d)==(tot)&&(a!=i&&b!=i&&c!=j&&d!=j);
}
int main(void)
{
	FIO
	int x=-1,y=-1;
	cin>>h>>w;
		
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				cin>>pic[i][j];
				if(pic[i][j]=='*') tot++;
			}
		}
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(pic[i][j]=='*')
				{
					if(fun(i,j))
					{
						cout<<"YES"<<endl;
						return 0;
					}
				}
			}
		}
		cout<<"NO"<<endl;
		return 0;
}