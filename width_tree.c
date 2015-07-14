#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;

};

void get_max_width_rec(struct node *root,int count[],int level);

int height(struct node *root);
struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node ));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}
void get_max_width(struct node *root)
{
int h=height(root);
int *count=(int*)calloc(sizeof(int),h);


int level=0;
get_max_width_rec(root,count,level);
get_width(count,h);
}
void get_max_width_rec(struct node *root,int count[],int level)
 {
 if(root)
 {
 count[level]++;
 get_max_width_rec(root->lchild,count,level+1);
 get_max_width_rec(root->rchild,count,level+1);

 }
 }
int height(struct node *root)
{
if(root==NULL)
{
return 0;
}
return 1+(max(height(root->lchild),height(root->rchild)));
}
int max(int a,int b)
{
return (a>=b)?a:b;

}



 int get_width(int count[],int height)
 {
     int i;
 int max=count[0];
 for(i=0;i<height;i++)
 {
 if(count[i]>max)
 {
 max=count[i];

 }

 }
 return max;

 }
 int main()
 {
 struct node *root=newnode(10);
root->lchild=newnode(8);
root->rchild=newnode(2);
root->lchild->lchild=newnode(3);
root->lchild->rchild=newnode(5);
root->rchild->lchild=newnode(2);

get_max_width(root);
getch();
return 0;

 }
