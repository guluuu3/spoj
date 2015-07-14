#include <stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	int liss;
	struct node *left,*right;
};
int max(int a,int b)
{
	return (a>b)?a:b;
}
int LISS(struct node *root)
{
	if(root==NULL)
	return 0;
	if(root->liss)
	return (root->liss);
	if(root->left==NULL && root->right==NULL)
	return 
	(root->liss=1);
	int liss_excl=LISS(root->left)+LISS(root->right);
	int liss_incl=1;
	if(root->left)
	 liss_incl+=LISS(root->left->left)+LISS(root->left->right);
	if(root->right)
	liss_incl+=LISS(root->right->left)+LISS(root->right->right);
	root->liss=max(liss_excl,liss_incl);
	return root->liss;
}
struct node *newNode(int data)
{
	struct node *node=(struct node *)malloc(sizeof(struct node *));
	node->left=NULL;
	node->right=NULL;
	node->data=data;
	return (node);
}

int main(void) 
{
 struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
 
    printf ("Size of the Largest Independent Set is %d ", LISS(root));
 
    return 0;	
	
	
	
	
}
