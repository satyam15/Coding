#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll val;
ll op=0;
ll digit(ll x)
{
	ll a=0;
	while(x>0)
	{
		a=a+x%10;
		x=x/10;
	}
	return a;
}
void check(ll n,ll d,ll no)
{
	ll v1,v2;
	
	if(no==18)
	return;
	

		if(n<val)
		{
			op=no;
			val=n;
		}
		else if(n==val)
		{	
			if(no<op)
			op=no;
			
		}
	
	
	v1=digit(n);
	v2=n+d;
	check(v1,d,no+1);
	check(v2,d,no+1);
	return ;
}
int main()
{
	ll i,t,n,d,a=0;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld%lld",&n,&d);
	val=n;
	op=0;
	check(n,d,a);
		printf("%lld %lld\n",val,op);
	}
	
}
