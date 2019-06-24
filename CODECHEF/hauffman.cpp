#include<bits/stdc++.h>
using namespace std;
struct Node{
	int freq;
	char info;
	struct Node *l,*r;
};
typedef struct Node node;
struct comp{
	bool operator()(node *l,node *r)
	{
		return (l->freq>r->freq);
	}
};
void print(node *root,string s)
{
	if(root==NULL) return;
	if(root->info != '$') cout<<root->info<<": "<<s<<endl;
	print(root->l,s+"0");
	print(root->r,s+"1");
}
void hauffman(int f[],char in[],int n)
{
	node *left,*right,*temp;
	priority_queue<node*,vector<node*>,comp> qu;
	for(int i=0;i<n;i++)
	{
		temp=(node*)malloc(sizeof(node));
		temp->freq=f[i];
		temp->info=in[i];
		temp->l=NULL;
		temp->r=NULL;
		qu.push(temp);
	}
	while(qu.size()!=1)
	{
		left=qu.top();
		qu.pop();
		right=qu.top();
		qu.pop();
		temp=(node*)malloc(sizeof(node));
		temp->info='$';
		temp->freq=left->freq+right->freq;
		temp->l=left;
		temp->r=right;
		qu.push(temp);
	}
	print(qu.top(),"");
}

int main(void)
{
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' }; 
    int freq[] = { 5, 9, 12, 13, 16, 45 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    hauffman(freq,arr,size);
    return 0;
}
