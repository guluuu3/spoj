#include<stdio.h>
#include<stdlib.h>
struct node
{

int data;
struct node *left;
struct node *right;
struct node *nextRight;
};
void connect_rec(struct node *root);
void connect(struct node *root)
{
root->nextRight=NULL;
connect_rec(root);

}
void connect_rec(struct node *root)
{
if(root==NULL)
return;

if(root->left)
root->left->nextRight=root->nextRight;
if(root->right)
root->right->nextRight=root->nextRight?root->nextRight->left:NULL;
connect_rec(root->left);
connect_rec(root->right);
}
struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  node->nextRight = NULL;

  return(node);
}
int main()
{
struct node *root = newnode(10);
  root->left        = newnode(8);
  root->right       = newnode(2);
  root->left->left  = newnode(3);

  // Populates nextRight pointer in all nodes
  connect(root);

  // Let us check the values of nextRight pointers
  printf("Following are populated nextRight pointers in the tree "
          "(-1 is printed if there is no nextRight) \n");
  printf("nextRight of %d is %d \n", root->data,
         root->nextRight? root->nextRight->data: -1);
  printf("nextRight of %d is %d \n", root->left->data,
        root->left->nextRight? root->left->nextRight->data: -1);
  printf("nextRight of %d is %d \n", root->right->data,
        root->right->nextRight? root->right->nextRight->data: -1);
  printf("nextRight of %d is %d \n", root->left->left->data,
        root->left->left->nextRight? root->left->left->nextRight->data: -1);

  getchar();
  return 0;
}



