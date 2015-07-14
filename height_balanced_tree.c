#include<stdio.h>
#include<stdlib.h>
#define bool int
struct node
{
int info;
struct node *lchild;
struct node *rchild;
};
bool is_balanced(struct node *root)
{

if(root==NULL)
return 1;
int lheight=height(root->lchild);
int rheight=height(root->rchild);
if(abs(lheight-rheight)<=1&&is_balanced(root->lchild)&&is_balanced(root->rchild))
return 1;
return 0;

}
int max(int a,int b)
{
return (a>=b)?a:b;

}
int height(struct node *root)
{
if(root==NULL)
{
return 0;
}
return 1+(max(height(root->lchild),height(root->rchild)));
}
struct node *newnode(int data)
{
struct node *node=(struct node*)malloc(sizeof(struct node));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}
int main()
{
struct node *root=newnode(1);
root->lchild=newnode(2);
root->rchild=newnode(3);
root->lchild->lchild=newnode(4);
root->lchild->rchild=newnode(5);
root->lchild->rchild->lchild=newnode(6);
root->lchild->rchild->lchild->rchild=newnode(7);
if(is_balanced(root))
printf("tree is height balanced");
else printf("tree not balanced");
getch();
return 0;


}
