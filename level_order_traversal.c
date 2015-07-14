#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct node
{
struct node *left;
struct node *right;
int data;
};
struct node *queue[MAX];
front=-1;
rear=-1;
 void insert(struct node *item)
{
if(rear==MAX-1)
{
printf("queue overflow");
}
if(front==-1)
front=0;
queue[++rear]=item;

}
struct node *delete()
{
    struct node *item;
if(front==-1||front==rear+1)
{
printf("empty queue");
return 0;
}
item=queue[front++];
return  item;

}
struct node *level(struct node *root)
{
int lev=0;
struct node *ptr=root;
if(ptr==NULL)
return ;
insert(ptr);
while(!empty())
{
ptr=delete();

printf("%d - %d\n",ptr->data,lev);
if(ptr->left!=NULL)
{

insert(ptr->left);

}

if(ptr->right!=NULL)
{
insert(ptr->right);
lev++;
}

}

}
 int empty()
{
if(front==-1||front==rear+1)
return 1;
else
return 0;
}
struct node *newNode(int data)
{
struct node *node=(struct node*)malloc(sizeof (struct node));
node->left=NULL;
node->right=NULL;
node->data=data;
}
int main()
{
struct node *root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left  = newNode(1);
    root->left->right = newNode(4);
    root->left->right->left = newNode(3);
    root->right->right = newNode(8);
    root->right->right->right = newNode(9);
    root->right->right->left = newNode(7);
level(root);
return 0;
}
