#include<stdlib.h>
#include<stdio.h>
#define bool int
struct node
{
int info;
struct node *left;
struct node *right;
};
bool is_identical(struct node *root1,struct node *root2)
{
if(root1==NULL && root2==NULL)
return 1;

if(root1==NULL ||root2==NULL)
return 0;

if((root1->info==root2->info)&&is_identical(root1->left,root2->left)&&is_identical(root1->right,root2->right));
return 1;


}
bool is_subtree(struct node *T,struct node *S)
{
if(S==NULL)
return 1;
if(T==NULL)
return 0;

if (is_identical(T,S))
{
return 1;
}
if(is_subtree(T->left,S->left)||is_subtree(T->right,S->right))
{

printf("sub tree");
return 1;
}
else printf("not found");
}
struct node *newnode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node));
node->info=data;
node->left=NULL;
node->right==NULL;
return (node);
}
int main()
{

 struct node *T        = newnode(26);
    T->right              = newnode(3);
    T->right->right       = newnode(3);
    T->left               = newnode(10);
    T->left->left         = newnode(4);
    T->left->left->right  = newnode(30);
    T->left->right        = newnode(6);


    struct node *S    = newnode(610);
    S->right          = newnode(68);
    S->left           = newnode(41);
    S->left->right    = newnode(360);

if(is_subtree(T,S)==1)
printf("sub tree found");
if(is_subtree(T,S)==0)
printf("sub tree not found");
return 0;
}
