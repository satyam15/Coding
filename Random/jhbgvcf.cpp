#include<stdio.h>
#include<math.h>
void merge(long long int arr[], long long int l,long long int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    long long int L[n1], R[n2]; 
      for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
      i = 0;  
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 

    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(long long int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
         
        int m = l+(r-l)/2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  

int main(void)
{
	int t,count=1,count1=1;;
	int N,i;
	long long int x;
    long long int a[1000],b[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%lld",&a[i]);
		  
		}
			for(i=0;i<N;i++)
		{
			scanf("%lld",&b[i]);
		   
		}
		mergeSort(a, 0, N - 1);
		mergeSort(b, 0, N - 1);

		/*for(i=N-2;i>=0;i--)
		{
		if(a[i]==a[N-1])
		{
			count++;
		}
		else break;
		}
		for(i=N-2;i>=0;i--)
		{
		if(b[i]==b[N-1])
		{
			count1++;
		}
		else break;
		}	
		 if(t!=0)*/
		 int c=0;int c2=0;
		 long long int first=a[N-1];
		 for(i=N-1;i>=0;i--)
		 {
		 	if(a[i]==first)
		 	c++;
		 	else
		 	break;
		 }
		 first=b[N-1];
		 for(i=N-1;i>=0;i--)
		 {
		 	if(b[i]==first)
		 	c2++;
		 	else
		 	break;
		 }
		 long long int product=c*c2;
		printf("%lld\n",product);
		
		//printf("%d",co0unt1*count);

		}
				
	}


