#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* lchild;
struct node* rchild;
}
struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node ));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}

int is_sum_property(struct node *root)
{
int left_data=right_data=0;
if(root==NULL||root->lchild==NULL&&root->rchild==NULL)
return 1;
else
{
if(node->lchild!=NULL)
left_data=node->left->info;

if(node->right!=NULL)
right_data=node->rchild->info;

if((node=left_data+right_data)&&is_sum_property(node->left)&&is_sum_property(node->right))
return 1;
else
return 0;
}


}
int main()
{
int x;
struct node *node=newnode(10);
node->lchild=newnode(8);
node->rchild=newnode(2);
node->lchild->lchild=newnode(3);
node->lchild->rchild=newnode(5);
node->rchild->lchild=newnode(2);
x=is_sum_property(node);
if(x==1);
printf("sum propert satisfied");
else printf("no sum property");
return 0;


}
