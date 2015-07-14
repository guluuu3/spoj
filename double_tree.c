#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* lchild;
struct node* rchild;
};
struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node ));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}
void double_tree(struct node *root)
{
struct node *temp;
if(root==NULL)
return ;
double_tree(root->lchild);
double_tree(root->rchild);

temp=root->lchild;
root->lchild=newnode(root->info);
root->lchild->lchild=temp;
printf("\n");
}
void inorder(struct node *root)
{
if(root==NULL)
return ;
inorder(root->lchild);
printf("%d\n",root->info);
inorder(root->rchild);
}
void preorder(struct node *root)
{


    if(root==NULL)
        return;
    printf("%d\t",root->info);
    preorder(root->lchild);
    preorder(root->rchild);

}
int main()
{

struct node *node=newnode(4);
node->lchild=newnode(2);
node->rchild=newnode(5);
node->lchild->lchild=newnode(1);
node->lchild->rchild=newnode(3);
inorder(node);
double_tree(node);
inorder(node);
double_tree(node);
preorder(node);
getch();
return 0;
}
