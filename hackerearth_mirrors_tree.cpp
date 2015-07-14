#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
//int max_level=0;
struct node
{
	int data;
	struct node *left,*right;
    bool visited;

};
struct node *newnode(int data)
{

	struct node *node=(struct node *)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	node->visited=false;
	return (node);
}

void print_right(struct node *root,int level,int *max_level)
{
	if(root==NULL)
	return;
	if(*max_level<level)
	{
	if(root->visited==false)
	{
		cout<<root->data<<endl;
		*max_level=level;
		root->visited=true;
	}
	}
	print_right(root->right,level+1,max_level);
	print_right(root->left,level+1,max_level);

}
void print_left(struct node *root,int level,int *max_value)
{
	if(root==NULL)
	return;
	if(*max_value<level)
	{
		if(root->visited==false)
		{
		cout<<root->data<<endl;
		*max_value=level;
	    }
	}
	print_left(root->left,level+1,max_value);
	print_left(root->right,level+1,max_value);

}
void right_view(struct node *root)
{
	int max_level=0;
	print_left(root,1,&max_level);
}
void left_view(struct node *root)
{
	int max_level=0;
	print_left(root,1,&max_level);
}


int main()
{
		int test;
        cin>>test;
        while(test--)
        {
        	int n;
            cin>>n;
            int a[n+1];
            for(int i=1;i<=n;i++)
            cin>>a[i];
            struct node *root=newnode(a[1]);
            vector <struct node*> V(100000);

            V[1]=root;
            for(int i=1;i<=n;i++)
            {

             if(a[i])
           {
            struct node *parent=V[i];

            if(2*i<=n && a[2*i])
            {
            parent->left=newnode(a[2*i]);
            V[2*i]=parent->left;
             }

            if((2*i+1)<=n && a[2*i+1])
            {
            parent->right=newnode(a[2*i+1]);
            V[2*i+1]=parent->right;
            }

            }
            }
            right_view(root);
            left_view(root);
        }
        cout<<endl;
return 0;
}
