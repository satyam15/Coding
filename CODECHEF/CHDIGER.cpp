#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
ll getlen(ll n)
{
	ll count=0;
	while(n)
	{
		count++;
		n/=10;
	}
	return count;
}

 void remove(int arr[],ll d,ll n)
 {
 	int arr1[n];
 	for(int i=0;i<n;i++)
 	{
 		if(arr[i]>d)
        {
            arr[i]=0;
        }
 	}
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            continue;
        arr1[++j]=arr[i];
    }
    for(int i=j+1;i<n;i++)
    {
        arr1[i]=d;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr1[i];
    }
 }

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,d;
    	cin>>n>>d;
    	ll min=10;
    	ll temp=n;
    	ll p=0,count=0;
    	int arr[18];
    	memset(arr,0,sizeof(arr));
    	ll x=getlen(n);
		ll y=(ll)pow(10,x-1);
    	while(temp)
    	{
			arr[p++]=temp/y;
			if(min>arr[p])
				min=arr[p];
			temp%=y;
			y/=10;
    	}
    	n=p;
    	if(min>=d)
    	{
    		for(int i=0;i<n;i++) cout<<x;
    		cout<<endl;
    	}
        else
        {
        	remove(arr,d,n);
            int k;
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]<arr[i])
                    {
                        arr[i]=arr[j];
                        for(k=i+1;k+j-i<n;k++)
                        {
                            arr[k]=arr[k+j-i];
                        }
                        if(n<=2)
                            arr[n-1]=d;
                        else
                        {
                            for(int p=k;p<n;p++)
                                arr[p]=d;
                        }
                        i=-1;
                        break;
                    }
                }
            }
        	for(int i=0;i<n;i++)
                cout<<arr[i];
            cout<<endl;
        }
    }
    
    return 0;
}