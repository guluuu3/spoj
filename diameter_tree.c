#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;

};
int height(struct node *root);
int diameter(struct node *root);
int max(int a,int b);
struct node *newnode(int data)
{
struct node *node=(struct node*)malloc(sizeof(struct node));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}
int diameter(struct node *root)
{


if(root==0)
return 0;

int lheight=height(root->lchild);
int rheight=height(root->rchild);

int ldiameter=diameter(root->lchild);
int rdiameter=diameter(root->rchild);

return max(lheight+rheight+1,max(ldiameter,rdiameter));


}
int height(struct node *root)
{
if(root==NULL)
return 0;

 return 1 + max(height(root->lchild),height(root->rchild));

}
int max(int a,int b)
{
return (a>=b)?a:b;

}
int main()
{


  struct node *node=newnode(4);
node->lchild=newnode(2);
node->rchild=newnode(5);
node->lchild->lchild=newnode(1);
node->lchild->rchild=newnode(3);

  printf("Diameter of the given binary tree is %d\n", diameter(node));

  getchar();
  return 0;
}
