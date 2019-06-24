#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int lli;
lli power(lli x,lli y)
{
	lli temp;
	if( y == 0)
		return 1;
	temp = power(x, y/2);
	if (y%2 == 0)
		return ((temp%mod)*(temp%mod))%mod;
	else
	{
		lli p = ((temp%mod)*(temp%mod))%mod;
		return ((x%mod)*(p%mod))%mod;
	}
}
lli funcPlus(lli a, lli b)
{
	return ((a%mod) + (b%mod))%mod;
}
lli funcMinus(lli a, lli b)
{
	return ((((a%mod) - (b%mod))%mod) + mod)%mod;
}
lli funcMult(lli a, lli b)
{
	return ((a%mod) * (b%mod))%mod;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string st;
		cin>>st;
		lli c=0,rem[100005],i=st.length();
		for(int kk=0;kk<st.length();kk++)
        {
            rem[i--]=st[kk]-'0';
    //cout<<rem[i+1];
            c++;
        }
        //cout<<i<<endl;

		lli dp1[c+5],dp2[c+5];
		lli pow_val1,pow_val2;

		pow_val1=power(10,c-1);
		pow_val2=((pow_val1%mod)*10)%mod;

		dp1[0]=1;
		dp2[0]=1;
		lli val=0;

		for(i=1;i<=c;i++)
		{
			dp1[i]=((dp1[i-1]%mod)*(pow_val1%mod))%mod;
			val = ((val%mod) + (dp1[i]%mod))%mod;
			dp2[i]=((dp2[i-1]%mod)*(pow_val2%mod))%mod;

			//cout<<dp1[i]<<" "<<dp2[i]<<" "<<val<<endl;
		}
		lli ans=0,store,prev;

		for(i=1;i<=c;i++)
		{
			if(i==1)
			{
				store = ((rem[i]%mod) * (val%mod))%mod;
				//cout<<"Store "<<store<<endl;
				ans = funcPlus(ans, store);
				//cout<<"Ans "<<ans<<endl;
				prev = val;
			}
			else
			{
				val = funcMult(prev , 10);
				val = funcPlus(val , dp2[i-2]);
				val= funcMinus(val, dp2[i-1]);
				store = funcMult(rem[i], val);
				ans = funcPlus(ans , store);
				prev =val;

			}

		}
		cout<<ans<<endl;

	}
	return 0;
}
