#include<stdlib.h>
#include<stdio.h>
#define bool int
#define true 1
#define false 0
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
bool is_foldable(struct node *root)
{
bool res;
if(root==NULL)
return true;
mirror(root->lchild);

res=is_struct_same(root->lchild,root->rchild);
mirror(root->lchild);

return res;

}
bool is_struct_same(struct node *a,struct node *b)
{
if(a==NULL&&b==NULL)
return true;

if(a!=NULL&&b!=NULL&&is_struct_same(a->lchild,b->lchild)&&is_struct_same(a->rchild,b->rchild))
return true;
else
return false;
}
void mirror(struct node *root)
{
if(root==NULL)
return;
else
{
mirror(root->lchild);
mirror(root->rchild);
struct node *temp=root->lchild;
root->lchild=root->rchild;
root->rchild=temp;

}

}
int main()
{

struct node *root = newnode(1);
  root->lchild        = newnode(2);
  root->rchild       = newnode(3);
  root->rchild->lchild  = newnode(4);
  root->lchild->rchild = newnode(5);

if(is_foldable(root)==1)
printf("foldable property satisfied");
else
printf("tree not foldable");
getch();
return 0;
}
//there is another metoh to do so witout findibg the mirror by checking is_structure_same(a->lchild,b->rchild)&&is_structure_same(a->rchild,r->lchild)
