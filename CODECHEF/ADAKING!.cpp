#include<iostream>
using namespace std;
int main()
{
	int t,r,c,i=0,x1,x2,y1,y2,k,area;
	cin>>t;
	while(t--)
	{
	cin>>r>>c>>k;
		if(r+k>8)
			x1=8;
		else
			x1=r+k;
		if(c+k>8)
			y1=8;
		else
			y1=c+k;
		if(r-k<8)
			x2=1;
		else
			x2=r-k;
		if(c-k<1)
			y2=1;
		else
			y2=c-k;
	area=(x1-x2+1)*(y1-y2+1);
	cout<<area<<endl;
	}
}