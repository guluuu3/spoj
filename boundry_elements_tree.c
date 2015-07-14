#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
void print_leaf(struct node *root);
void print_boundry_left(struct node *root);
void print_boundry_right(struct node *root);
void print_leaf(struct node *root)
{
if(root)
{
print_leaf(root->left);
if((!root->left) && (!root->right))
{
printf("%d",root->data);
print_leaf(root->right);
}
}
}
void print_boundry_right(struct node *root )
{
if(root)
{
if(root->right)
{
print_boundry_right(root->right);
printf("%d",root->data);
}
 else if(root->left)
{
print_boundry_right(root->left);
printf( "%d",root->data);
}

}


}
void print_boundry_left(struct node *root)
{
if(root)
{
if(root->left)
{
printf("%d",root->data);
print_boundry_left(root->left);

}
else if(root->right)
{
printf("%d",root->data);
print_boundry_left(root->right);
}

}

}
void print_boundry(struct node *root)
{
if(root)
{
printf("%d",root->data);
print_boundry_left(root->left);
print_leaf(root->left);
print_leaf(root->right);
print_boundry_right(root->right);
}


}
struct node *newNode(int data)
{
struct node *node=(struct node*)malloc(sizeof(struct node));
node->data=data;
node->right=NULL;
node->left=NULL;

return (node);
}
int main()
{
struct node *root = newNode(10);
  root->left = newNode(2);
  root->right = newNode(6);
  root->left->left = newNode(8);
  root->left->right = newNode(-4);
  root->right->left = newNode(7);
  root->right->right = newNode(5);

print_boundry(root);
return 0;

}
