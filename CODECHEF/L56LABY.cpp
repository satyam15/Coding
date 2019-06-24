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
// void fun(int x,int y,int p,int px,int py)
// {
// 	if(ch[x][y] == 'B' || p<0)
// 		return;
// 	else 
// 	{
// 		ch[x][y]='Y';
// 		//cout<<x<<" "<<y<<endl;
// 		if(x>1 && ((x-1 != px) || (y !=py)) && arr[x-1][y] != -1) fun(x-1,y,p-1,x,y);
// 		if(x<m && ((x+1 != px) || (y!=py))&& arr[x+1][y] != -1) fun(x+1,y,p-1,x,y);
// 		if(y>1 && ((x != px) || (y-1 != py))&& arr[x][y-1] != -1) fun(x,y-1,p-1,x,y);
// 		if(y<n && ((x != px) || (y+1 != py))&& arr[x][y+1] != -1) fun(x,y+1,p-1,x,y);
// 	}
// }
int main(void)
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,m,n;
		cin>>m>>n;
		char ch[m+1][n+1];
		int arr[m+1][n+1],size=-1,curr[m+1][2];
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				//visited[i][j]=0;
				cin>>x;
				arr[i][j]=x;
				if(x==-1) ch[i][j]='B';
				else
				 {
				 ch[i][j]='N';
				 if(x>0){
				 	curr[++size][0]=i;
				 	ch[i][j]='Y';
				 	curr[size][1]=j;
				 	arr[i][j]++;
				 }
				 }
			}
		}
		//cout<<size<<endl;
		for(int i=0;i<=size;i++)
		{
			x=curr[i][0];
			y=curr[i][1];
	 		if(x>1 &&  arr[x-1][y] != -1 && arr[x-1][y]<arr[x][y]-1) 
	 		{
	 			ch[x-1][y]='Y';
	 			arr[x-1][y]=arr[x][y]-1;
	 			curr[++size][0]=x-1; curr[size][1]=y;
	 		}
	 		if(x<m && arr[x+1][y] != -1 && arr[x+1][y]<arr[x][y]-1)
	 		{
	 			ch[x+1][y]='Y';
	 			 arr[x+1][y]=arr[x][y]-1;
	 			curr[++size][0]=x+1; curr[size][1]=y;
	 		}
	 		if(y>1 &&  arr[x][y-1] != -1 && arr[x][y-1]<arr[x][y]-1) 
	 		{
	 			ch[x][y-1]='Y';
	 			arr[x][y-1]=arr[x][y]-1;
	 			curr[++size][0]=x; curr[size][1]=y-1;
	 		}
	 		if(y<n &&  arr[x][y+1] != -1 && arr[x][y+1]<arr[x][y]-1) 
	 		{
	 			ch[x][y+1]='Y';
	 			arr[x][y+1]=arr[x][y]-1;
	 			curr[++size][0]=x; curr[size][1]=y+1;
	 		}

		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<ch[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}