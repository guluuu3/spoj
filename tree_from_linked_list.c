#include<stdio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node *next;

};
struct Tnode
{
 int info;
 struct Tnode *lchild;
 struct Tnode *rchild;
};
struct node *middlelinklist(struct node *head,int n)
{
struct node *current;
int i;
current=head;
while(i<=n/2)
{
current=current->next;
i++;
}
if(head==NULL)
    return;
struct Tnode *root=newnode(current->info)

root->lchild=middlelinklist(head,n/2);
root->rchild=current->next;
return current;
}
struct Tnode *newnode(int data)
{
 struct Tnode *node=(struct Tnode *)malloc(sizeof(struct Tnode));
 node->info=data;
 node->lchild=NULL;
 node->rchild=NULL;
return (node);
}
void push(struct node* head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
    /* put in the data  */
    new_node->info  = new_data;

    /* link the old list off the new node */
    new_node->next = (head_ref);

    /* move the head to point to the new node */
    (head_ref)    = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while(node!=NULL)
    {
        printf("%d ", node->info);
        node = node->next;
    }
}
void inorder(struct Tnode *root)
{
  if(root==NULL)
        return ;
  inorder(root->lchild);
  printf("%d",root->info);
  inorder(root->rchild);
}

int main()
{
    struct node *head=NULL;
    push(head, 7);
    push(head, 6);
    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    printf("\n Given Linked List ");
    printList(head);

    middlelinklist(head,7);
    inorder(head);
return 0;
}

