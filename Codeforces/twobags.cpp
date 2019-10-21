#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>arr;
	for(int i=0;i<7;i++)
	{
		int x;
		cin>>x;
		if(x>0)
		{
			arr.push_back({x,i+1});
		}
	}
	int n1=arr.size();
	int i=0;
	if(n1==1)
	{
		cout<<arr[0].second<<endl;

	}
	else
	{
	    long long sum=0;
	    for(auto it:arr)
	    	sum+=it.first;
	    if(sum==n)
	    {
	    	cout<<arr[n1-1].second;
	    }
	    else if(sum>n)
	    {
	    	//sum=sum%n;
	    	//cout<<"inside sum>n"<<endl;
	    	i=0;
	    	long long sum2=0;
	    	while(sum2<n)
	    	{

	    		//cout<<"inside while"<<endl;
	    		sum2+=arr[i].first;
	    		if(sum2>=n)
	    			break;
	    		i++;
	    	}
	    	cout<<arr[i].second<<endl;
	    }
	    else
	    {
	    	//cout<<"inside sum<n"<<endl;
	    	i=0;
	    	long long sum2=0;
	    	while(sum2<n)
	    	{
	    		sum2+=arr[i].first;
	    		if(sum2>=n)
	    			break;
	    		i=(i+1)%n1;
	    	}
	    	cout<<arr[i].second<<endl;
	    }

    }
    return 0;
}
