#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *left;
struct node *right;
int data;
};
void create(struct node *root,struct node **head)
{

if(root==NULL)
return ;
struct node *prev=NULL;
create(root->left,head);

if(prev==NULL)
*head=root;
else
{
root->left=prev;
prev->right=root;

}
prev=root;
create(root->right,head);

}
 struct node* newNode(int data)
{
struct     node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return (new_node);
}

/* Function to print nodes in a given doubly linked list */
void printList(struct node *node)
{
    while (node!=NULL)
    {
       printf("%d",node->data);
        node = node->right;
    }
}

/* Driver program to test above functions*/
int main()
{
    // Let us create the tree shown in above diagram
   struct node *root        = newNode(10);
    root->left        = newNode(12);
    root->right       = newNode(15);
    root->left->left  = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);

    // Convert to DLL
   struct node *head = NULL;
    create(root, &head);

    // Print the converted list
    printList(head);

    return 0;
}
