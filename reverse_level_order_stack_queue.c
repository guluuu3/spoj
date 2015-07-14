#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
top=-1;
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

push(ptr->data);

if(ptr->right!=NULL)
{
insert(ptr->right);

}
if(ptr->left!=NULL)
{

insert(ptr->left);

}


}
while(!stack_empty())
{
int item=pop();
printf("%d\n",item);
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
void push(int item)
{
if(top==MAX-1)
{
printf("stack overflow");
}
stack[top++]=item;
}
int pop()
{
if(top==-1)
printf("stack empty");
int item=stack[top--];
return item;
}
int stack_empty()
{

    if(top==-1)
        return 1;
    else return 0;
}
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);

level(root);
return 0;
}
