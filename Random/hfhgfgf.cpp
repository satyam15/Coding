#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,l,k,ans=0,time,redt=0;
		cin>>n>>m>>k>>l;
		ll a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		time=m*l;
		ll arr[n],p=0;
		arr[0]=time;
		ll temp =0;
		bool flag=true;
		while(temp<n)
		{
			
			redt+=l;
		/*	if(redt>=k)
			{
				flag=false;
				break;
			}*/
			if(m==0)
			break;
			m--;
			if(a[temp]- redt>0&&m!=0)
			{
				
				arr[++p]=l*m;
			
			}
			else if(a[temp]-redt<=0)
			{
				
				int x=temp;
				while(a[x]-redt<=0&&x!=n)
				x++;
				x-=temp;
				m+=x;
				
				arr[++p]=l*m;
			
				temp+=x;
			}
			//cout<<p<<" ";
			
		}
	/*	if(!flag)
		{
			redt-=l;
			arr[++p]=l*m;
		}*/
		cout<<"\n\n";
		//cout<<p<<endl;
		sort(arr,arr+(n+1));
		for(int i=0;i<=p;i++)
		cout<<arr[i]<<"  ";
		cout<<"\n\n";
		//cout<<arr[0]<<endl;

	}
	return 0;
}
