#include<stdio.h>
int min(int sum[])
{
	int i,x;
	x=sum[0];
	for(i=1;i<8;i++)
	{
		if(x>sum[i])
		x=sum[i];
	}
	return x;
}
int main(void)
{
	int x[3][3],i,j,sum[8]={0,0,0,0,0,0,0,0};
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&x[i][j]);
	int a1[3][3]={8,3,4,1,5,9,6,7,2},a2[3][3]={6,1,8,7,5,3,2,9,4},a3[3][3]={2,9,4,7,5,3,6,1,8},a4[3][3]={6,7,2,1,5,9,3,4},a5[3][3]={2,7,6,9,5,1,4,3,8},a6[3][3]={4,9,2,3,5,7,8,1,6},a7[3][3]={8,1,6,3,5,7,4,9,2},a8[3][3]={4,3,8,9,5,1,2,7,6};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{
			if(a1[i][j]-x[i][j]<0)
			sum[0]+=(x[i][j]-a1[i][j]);
			else sum[0]+=(a1[i][j]-x[i][j]);
				if(a2[i][j]-x[i][j]<0)
			sum[1]+=(x[i][j]-a2[i][j]);
			else sum[1]+=(a2[i][j]-x[i][j]);
				if(a3[i][j]-x[i][j]<0)
			sum[2]+=(x[i][j]-a3[i][j]);
			else sum[2]+=(a3[i][j]-x[i][j]);
				if(a4[i][j]-x[i][j]<0)
			sum[3]+=(x[i][j]-a4[i][j]);
			else sum[3]+=(a4[i][j]-x[i][j]);
				if(a5[i][j]-x[i][j]<0)
			sum[4]+=(x[i][j]-a5[i][j]);
			else sum[4]+=(a5[i][j]-x[i][j]);
				if(a6[i][j]-x[i][j]<0)
			sum[5]+=(x[i][j]-a6[i][j]);
			else sum[5]+=(a6[i][j]-x[i][j]);
				if(a7[i][j]-x[i][j]<0)
			sum[6]+=(x[i][j]-a7[i][j]);
			else sum[6]+=(a7[i][j]-x[i][j]);
				if(a8[i][j]-x[i][j]<0)
			sum[7]+=(x[i][j]-a8[i][j]);
			else sum[7]+=(a8[i][j]-x[i][j]);
		}
	}
	printf("%d",min(sum));
	return 0;
	
}
