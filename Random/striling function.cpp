ll comp(int n,int k) {
    int maxj = n-k;

    ll *arr = new int[maxj+1];

    for (int i = 0; i <= maxj; ++i)
        arr[i] = 1;

    for (int i = 2; i <= k; ++i)
        for(int j = 1; j <= maxj; ++j)
            {
            	ll x=((i%mod)*(arr[j-1]%mod))%mod;
            	arr[j]=arr[j]%mod+arr[j-1]%mod;
			}

    return arr[maxj];
}
