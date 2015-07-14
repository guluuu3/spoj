#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;

};
void mirror(struct node *root);
struct node *newnode(int );
void inoreder(struct node *root);

struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node ));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);

}
void mirror(struct node *root)
{
struct node *temp;
if(root==NULL)
return ;
else
{
mirror(root->lchild);
mirror(root->rchild);
temp=root->lchild;
root->lchild=root->rchild;
root->rchild=temp;
}
}
void inorder(struct node *root)
{
if(root==NULL)
return;
else
{
inorder(root->lchild);
printf("%d\n",root->info);
inorder(root->rchild);

}

}
int main()
{
struct node *node=newnode(4);
node->lchild=newnode(2);
node->rchild=newnode(5);
node->lchild->lchild=newnode(1);
node->lchild->rchild=newnode(3);
inorder(node);
printf("MIRROR TREE INORDER\n");
mirror(node);
inorder(node);
return 0;

}//this is an extraordinarory method to find descending tree..//
