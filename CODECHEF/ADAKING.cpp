#include<iostream>
using namespace std;
int main()
{
	int t,r,c,i=0,x1,x2,y1,y2,k,area;
	cin>>t;
	while(t--)
	{
	cin>>r>>c>>k;
	i=k;
	while(r+k>8)
		k--;
	x1=r+k;
	k=i;
	while(c+k>8)
		k--;
	y1=c+k;
	k=i;
	while(c-k<1)
		k--;
	y2=c-k;
	k=i;
	while(r-k<1)
		k--;
	x2=r-k;
	area=(x1-x2+1)*(y1-y2+1);
	cout<<area<<endl;
	}
}