#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *left;
struct node *right;
int data;
};
struct node *newNode(int info)
{

struct node *node=(struct node*)malloc(sizeof(struct node));
node->data=info;
node->left=NULL;
node->right=NULL;

return (node);
}
 int sum_tree(struct node *root)
 {
 if(root==NULL)
 {
 return 0;

 }
 int old_data=root->data;
 root->data=sum_tree(root->left)+sum_tree(root->right);
 //printf("the root called is %d",root->data);
 return (root->data+old_data);

 }
 void inorder(struct node *root)
 {
 if(root==NULL)
 return ;
 inorder(root->left);
 printf("%d",root->data);
 inorder(root->right);

 }
 int main()
{


  struct node *root = newNode(10);
  root->left = newNode(-2);
  root->right = newNode(6);
  root->left->left = newNode(8);
  root->left->right = newNode(-4);
  root->right->left = newNode(7);
  root->right->right = newNode(5);

  sum_tree(root);

  // Print inorder traversal of the converted tree to test result of toSumTree()
  printf("Inorder Traversal of the resultant tree is: \n");
  inorder(root);

  getchar();
  return 0;
}
