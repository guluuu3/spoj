#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;
};
struct node *newnode(int );
void path_print(struct node*,int [],int);
void print_array(int [],int );
void printPath(struct node* );

 void printPath(struct node* node)
{
int path[1000];
path_print(node,path,0);


}
struct node *newnode(int data)
{
struct node *node=(struct node* )malloc(sizeof(struct node));
node->info=data;
node->lchild=NULL;
node->rchild=NULL;
return (node);
}


void path_print(struct node* root,int path[],int pathlength)
{


 if(root==NULL)
        return;
 path[pathlength]=root->info;
 pathlength++;
 if(root->lchild==NULL && root->rchild==NULL)
    {


    print_array(path,pathlength);
}
 else
 {
     path_print(root->lchild,path,pathlength);
     path_print(root->rchild,path,pathlength);


 }


}
void print_array(int path[],int pathlength)
{

int i;
for(i=0;i<pathlength;i++)
{
printf("%d",path[i]);

}
printf("\n");
}
int main()
{
struct node *root=newnode(1);
root->lchild=newnode(2);
root->rchild=newnode(3);
root->lchild->lchild=newnode(4);
root->lchild->rchild=newnode(5);

printPath(root);

getchar();
return 0;

}
