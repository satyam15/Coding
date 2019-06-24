#include<stdio.h>
#include<stdlib.h>
int in[3][3]={{1, 2, 3},
        {5, 6, 0},
        {7, 8, 4} };
int fn[3][3]= {
        {1, 2, 3},
        {5, 8, 6},
        {0, 7, 4}
    };
int match()
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
				if(in[i][j]!=fn[i][j])
					return 0;
		}
	return 1;
}
void ans(int x,int y)
{
	int temp;
	if(match())
	{
		return;
	}
	//move right
	if(x<2)
	{
		temp=in[x][y];
		in[x][y]=in[x+1][y];
		in[x+1][y]=temp;
		ans(x+1,y);

	}
	//move left
	if(x>0)
	{
		temp=in[x][y];
		in[x][y]=in[x-1][y];
		in[x-1][y]=temp;
		ans(x-1,y);
	}
	//move up
	if(y>0)
	{
		temp=in[x][y];
		in[x][y]=in[x][y-1];
		in[x][y-1]=temp;
		ans(x,y-1);

	}
	//move down
	if(y<2)
	{
		temp=in[x][y];
		in[x][y]=in[x][y+1];
		in[x][y+1]=temp;
		ans(x,y+1);

	}
int i,j;
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
				printf("%d  ",&in[i][j]);
			}
			printf("\n");
		}

}
int main(void)
{
	printf("Enter intial\n");
	int i,j;
	ans(2,1);
	/*for(i=0;i<n;i++)
		for(j=0;j<3;j++)
		scanf("%d",&in[i][j]);

	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
		scanf("%d",&fn[i][j]);*/
}
