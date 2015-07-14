#include<stdlib.h>
#include<stdio.h>
#define bool int
struct node
{
int info;
struct node *lchild;
struct node *rchild;
};
struct node *newnode(int data)
{
struct node *node=(struct node*)malloc(sizeof(struct node));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}
bool is_sum_property(struct node *root,int sum)
{
if(root==NULL)
return (sum==0);

else
{
 bool ans =0;
int sub_sum=sum-root->info;
if(sub_sum==0 &&root->lchild==NULL&& root->rchild==NULL)
return 1;
if(root->lchild)
ans=ans||is_sum_property(root->lchild,sub_sum);

if(root->rchild)
ans=ans||is_sum_property(root->rchild,sub_sum);

return ans;
}

}
int main()
{
int sum =210;
struct node *root=newnode(10);
root->lchild=newnode(8);
root->rchild=newnode(2);
root->lchild->lchild=newnode(3);
root->lchild->rchild=newnode(5);
root->rchild->lchild=newnode(2);


if(is_sum_property(root,sum))
printf("root to leaf property satisfied");
else
printf("proprty not satisfied");
getch();
return 0;
}
