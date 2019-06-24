#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
vector<int>* sieve()
{
bool isprime[MAX];
for(int i=0;i<MAX;i++)
isprime[i]=true;
isprime[0]=false;
isprime[1]=false;
for(int i=2;i*i<=MAX;i++)
{
	if(isprime[i])
	{
		for(int j=i*i;j<MAX;j+=i)
		isprime[j]=false;
	}
}
vector<int>* prime=new vector<int>();
prime->push_back(2);	
for(int i=3;i<MAX;i+=2)
if(isprime)
prime->push_back(i);
return prime;
}
void printprime(long long l,long long r,vector<int>* & prime)
{
	bool isprime[r-l+1];
	for(int i=0;i<=r-l;i++)
	isprime[i]=true;
	for(int i=0;prime->at(i)*(long long)prime->at(i)<=r;i++)
	{
		int cprime=prime->at(i);
		long long int base=(l/cprime)*cprime;
		if(base<l)
		base+=cprime;
		for(long long int j=base;j<=r;j+=cprime)
		{
			isprime[j-l]=false;
		}
		if(base==cprime)
		{
			isprime[base-l]=true;
		}
	}
	for(int i=0;i<=r-l;i++)
	{
		if(isprime[i]==true&&i+l!=1)
		cout << i+l << endl;
	}
}
int main(void)
{
	vector<int>* prime=sieve();
	int t;
	cin>>t;
	while(t--){
	long long int l,r;
	cin>>l>>r;
    printprime(l,r,prime);
}
}
