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
int n,m;
int safe(int i,int j)
{
	return ((i>=0&&i<n)&&(j>=0&&j<m));
}
int main(void)
{
	FIO
	int time=0;
	cin>>n>>m;
	int arr[n][m],one=0,fl;
	queue<pair<int,int>> two;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]==2)
					two.push(mk(i,j));
				if(arr[i][j]==1)
					one++;
			}
	if(one==0) cout<<0<<endl;
	else
	{
		two.push(mk(-1,-1));
		while(!two.empty())
		{
			fl=0;
			int i=two.front().ff;
			int j=two.front().ss;
			two.pop();
			if(i==-1&&j==-1&&(!two.empty())) {two.push(mk(-1,-1)); time++; continue;}
			if(i==-1&&j==-1&&(two.empty())) break; 
			if(safe(i+1,j)&&arr[i+1][j]==1) {one--; arr[i+1][j]=2; two.push(mk(i+1,j));}
			if(safe(i-1,j)&&arr[i-1][j]==1) {one--; arr[i-1][j]=2; two.push(mk(i-1,j));}
			if(safe(i,j+1)&&arr[i][j+1]==1) {one--; arr[i][j+1]=2; two.push(mk(i,j+1));}
			if(safe(i,j-1)&&arr[i][j-1]==1) {one--; arr[i][j-1]=2; two.push(mk(i,j-1));}
		}
		if(one==0) cout<<time<<endl;
		else cout<<-1<<endl;
		
	}

}
