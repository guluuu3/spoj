#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;

};
struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node ));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}
int count_leaf(struct node *root)
{

if(root==NULL)
{

return;
}
if(root->lchild==NULL &&root->rchild==NULL)
return 1;
else
    return (count_leaf(root->lchild)+count_leaf(root->rchild));

}
int main()
{
    int count;
struct node *node=newnode(4);
node->lchild=newnode(2);
node->rchild=newnode(9);
node->lchild->lchild=newnode(1);
node->lchild->rchild=newnode(3);
node->rchild->lchild=newnode(5);
node->rchild->rchild=newnode(6);
count=count_leaf (node);
printf("%d",count);
return 0;
}
