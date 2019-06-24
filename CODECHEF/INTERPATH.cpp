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
 ll power(ll a, ll b){ll res=1;a=a%mod; while(b){if(b&1)res=(res*a)%mod; a=(a*a)%mod;b/=2;}return res;}
 ll invmod(ll a){return power(a,mod-2);}
 #define MAXN 1000 
#define level 1000
vector <int> tree[MAXN]; 
int depth[MAXN]; 
int parent[MAXN][level]; 
void dfs(int cur, int prev) 
{ 
	depth[cur] = depth[prev] + 1; 
	parent[cur][0] = prev; 
	for (int i=0; i<tree[cur].size(); i++) 
	{ 
		if (tree[cur][i] != prev) 
			dfs(tree[cur][i], cur); 
	} 
} 

void precomputeSparseMatrix(int n) 
{ 
	for (int i=1; i<level; i++) 
	{ 
		for (int node = 1; node <= n; node++) 
		{ 
			if (parent[node][i-1] != -1) 
				parent[node][i] = 
					parent[parent[node][i-1]][i-1]; 
		} 
	} 
} 
int lca(int u, int v) 
{ 
	if (depth[v] < depth[u]) 
		swap(u, v); 
	int diff = depth[v] - depth[u]; 
	for (int i=0; i<level; i++) 
		if ((diff>>i)&1) 
			v = parent[v][i]; 
	if (u == v) 
		return u; 
	for (int i=level-1; i>=0; i--) 
		if (parent[u][i] != parent[v][i]) 
		{ 
			u = parent[u][i]; 
			v = parent[v][i]; 
		} 

	return parent[u][0]; 
} 

void addEdge(int u,int v) 
{ 
	tree[u].push_back(v); 
	tree[v].push_back(u); 
} 
int main(void)
 {
 	FIO	 
	memset(parent,-1,sizeof(parent)); 
	int n; 
	cin>>n;
	addEdge(1,2); 
	addEdge(1,3); 
	addEdge(2,4); 
	addEdge(2,5); 
	addEdge(2,6); 
	addEdge(3,7); 
	addEdge(3,8); 
	depth[0] = 0; 
	dfs(1,0); 
	precomputeSparseMatrix(n); 
	cout << "LCA(4, 7) = " << lca(4,7) << endl; 
	cout << "LCA(4, 6) = " << lca(4,6) << endl; 
	return 0; 
} 
