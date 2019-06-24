

        #include<bits/stdc++.h>
        using namespace std;
         
        vector<int> adj[100005];
        int food[100005]={0},eat2[100005]={0},eat1[100005]={0};
        void dfs1(int i,int p,int tog)
        {
            int ans=0;
            eat1[i] = food[i];
        	for(int x : adj[i])
        	{
        		if(x!=p)
        		{
                    if(tog==1) tog=0;
                    else tog =1;
        		    dfs1(x,i,tog);
        			ans = max(ans,eat1[x]);
        		}
        	}
            if(tog==1)
        	eat1[i]+=ans;
            else eat1[i]-=ans;
        }
        void dfs2(int i,int p)
        {
        	int path1=0,path2=0;
        	for(int j : adj[i])
        	{
        		if(j==p)
        			continue;
        		if(path1<=eat1[j])
        		{
                    path2=path1;
        			path1=eat1[j];
        		}
        		else if(path2<eat1[j])
        		{
        			path2=eat1[j];
        		}
        	}
        	for(int j : adj[i])
        	{
        		if(j==p)
        			continue;
        		if(path1==eat1[j])
        			eat2[j]=food[j]+max(eat2[i],food[i]+path2);  //path is other than path1,path2
        		else
        			eat2[j]=food[j]+max(eat2[i],food[i]+path1);	 //path is other than path1,path2
        		dfs2(j,i);
        	}
        }
        int main(void)
        {
        	int t,n;
        	  	int u,v;
        		cin>>n;
        		memset(eat1,0,sizeof(eat1));
        		memset(eat2,0,sizeof(eat2));
        		for(int i=1;i<=n;i++)
        		{
        			cin>>u;
        			food[i]=u;
        			adj[i].clear();
        		}
         
        		for(int i=1;i<n;i++)
        		{
     
        			cin>>u>>v;
        			adj[u].push_back(v);
        			adj[v].push_back(u);
        		}
        		dfs1(1,0,1);
        		eat2[1]=food[0];
        		dfs2(1,0);
                int ans=0;
        		for(int i=1;i<=n;i++)
        		{
        			int ans=max(ans,max(eat1[i],eat2[i]));
        		}
                cout<<ans<<endl;
        		cout<<endl;
        	
        	return 0;
        }
