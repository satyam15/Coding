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
	string s,e;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin.clear();
	cin>>s>>e;
	int sh,sm,eh,em;
	sh=(s[0]-'0')*10+(s[1]-'0');
	sm=(s[3]-'0')*10+(s[4]-'0');
	eh=(e[0]-'0')*10+(e[1]-'0');
	em=(e[3]-'0')*10+(e[4]-'0');
	while(sh != eh || sm != em)
	{
		if(sm==59)
		{
			if(sh ==23) sh=1;
			else sh++;
			sm=0;			
		}
		else
			sm++;
		if(em == 0)
		{
			if(eh == 1) eh=23;
			else eh--;
			em=59;
		}
		else em--;
		// printf("em time =%02d:%02d\n",eh,em);
		// printf("sm time =%02d:%02d\n",sh,sm);

	}
	printf("%02d:%02d\n",eh,em);
	return 0;
}