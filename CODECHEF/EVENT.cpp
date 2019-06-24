#include <bits/stdc++.h>
using namespace std;
#define ld double
#define ll long long
#define pb push_back
#define mk make_pair
#define mod 1000000007
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<pair <ll,ll>, null_type,less<pair <ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int T;
	cin>>T;

	string days[14] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday",
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

	while(T--)
	{
		string s, e;
		int l, r, beg, end;
		cin>>s>>e>>l>>r;

		for(int i = 0; i < 7; i++)
		{
			if(days[i] == s)
			{
				beg = i;
				break;
			}
		}

		for(int i = beg; i < 14; i++)
		{
			if(days[i] == e)
			{
				end = i;
				break;
			}
		}

		int min_dur = end - beg + 1, count = 0;

		while(min_dur < l)
		{
			min_dur += 7;
		}

		if(min_dur <= r and min_dur + 7 > r) cout<<min_dur<<'\n';
		else if(min_dur <= r and min_dur +7 <= r) cout<<"many\n";
		else  cout<<"impossible\n";
	}
	return 0;	
}