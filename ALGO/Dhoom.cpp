// #include <bits/stdc++.h>
// using namespace std;
// #define ld double
// #define ll long long
// #define pb push_back
// #define mk make_pair
// #define mod 1000000007
// #define ff first
// #define ss second
// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define all(x) x.begin(),x.end()
// int main(void)
// {
// 	FIO
// 	int s,l,n,tp;
// 	cin>>s>>l>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++) cin>>arr[i];
// 	map<int,int> mp;
// 	mp[s]=0;
// 	queue<int> q;
// 	q.push(s);
// 	while(!q.empty())
// 	{
// 		tp=q.front();
// 		q.pop();
// 		if(tp==l)
// 		{
// 			cout<<mp[l]<<endl;
// 			break;
// 		}
// 		for(int i=0;i<n;i++)
// 		{
// 			int n=((arr[i]%100000)*(tp%100000))%100000;
// 			if(mp.find(n)==mp.end())
// 			{
// 				mp[n]=mp[tp]+1;
// 				q.push(n);
// 			}
// 		}
// 	}
// 	return 0;
// }
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
    int main(void)
    {
    	FIO
    	int s,l,n,tp;
    	cin>>s>>l>>n;
    	int arr[n];
    	for(int i=0;i<n;i++) cin>>arr[i];
    	int hs[100005];
    	memset(hs,0,sizeof(hs));
    	queue<int> q;
    	q.push(s);
    	while(!q.empty())
    	{
    		tp=q.front();
    		q.pop();
    		if(tp==l)
    		{
    			cout<<hs[l]<<endl;
    			return 0;
    		}
    		for(int i=0;i<n;i++)
    		{
    			int n=((arr[i]%100000)*(tp%100000))%100000;
    			if(hs[n]==0)
    			{
    				hs[n]=hs[tp]+1;
    				q.push(n);
    			}
    		}
    	}
    	cout<<-1<<endl;
    	return 0;
    }