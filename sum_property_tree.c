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

int is_sum_property(struct node *node)
{
int left_data,right_data;
left_data=0;
right_data=0;
if(node==NULL||(node->lchild==NULL&&node->rchild==NULL))
return 1;
else
{
if(node->lchild!=NULL)
left_data=node->lchild->info;

if(node->rchild!=NULL)
right_data=node->rchild->info;

if((node->info=left_data+right_data)&&is_sum_property(node->lchild)&&is_sum_property(node->rchild))
return 1;
else
return 0;
}


}
void inorder(struct node * node)
{
   if(node==NULL)
        return ;
   else
    {
    inorder(node->lchild);
    printf("%d\n",node->info);
    inorder(node->rchild);


   }


}
int main()
{
int x;
struct node *node=newnode(10);
node->lchild=newnode(8);
node->rchild=newnode(2);
node->lchild->lchild=newnode(3);
node->lchild->rchild=newnode(5);
node->rchild->lchild=newnode(1);
node->rchild->rchild=newnode(1);
inorder(node);
if(is_sum_property(node))
printf("sum property satisfied");
 else
 printf("sum property not satisfied");
 getch();
return 0;

}
