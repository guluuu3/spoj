#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node* left;
struct node *right;
int data;
};
struct node*newNode(int data)
{
struct node *node =(struct node*)malloc(sizeof(struct node));
 node->left=NULL;
 node->right=NULL;
 node->data=data;

}
int finddifference(struct node *root)
{
if(root==NULL)
return 0;
return root->data-finddifference(root->left)-finddifference(root->right);


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
    printf("%d is the required difference\n", finddifference(root));
    getchar();
return 0;
}
