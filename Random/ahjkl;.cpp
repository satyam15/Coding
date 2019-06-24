#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	int N,i,j,x,y;
	while(t--)
	{
		x=0;
	cin>>N;
	int arr1[N-1],arr2[N-1];
	memset(arr2,0,sizeof(arr2));
	memset(arr1,0,sizeof(arr1));
	int a[N][N];
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>a[i][j];	
		}
		
	}
	for(i=1;i<N;i++)
	for(j=i;j<N-i;j++)
		{
		arr1[i-1]+=a[j-i][j-i+1];
		}
	for(i=1;i<N;i++)
	for(j=i;j<N-i;j++)
		{
		arr2[i-1]+=a[j-i+1][j-i];
		}
		for(i=0;i<N;i++)
		x+=a[i][i];
		sort(arr1,arr1+N-1);
		sort(arr2,arr2+N-1);
	i=arr1[N-1]>arr2[N-1]?arr1[N-1]:arr2[N-1];
	y=i>x?i:x;
	cout<<y<<endl;
	}
	return 0;
}
