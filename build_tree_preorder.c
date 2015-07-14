#include<stdlib.h>
#include<stdio.h>
struct node
{
struct node *left;
struct node *right;
int data;
};
struct node *newNode(int info);
struct node *construct(int preorder[],char array[],int n);
struct node *construct_preorder(int preorder[],char array[],int *index,int n)
{
int index_array=*index;
if(index==n)
return ;
struct node *root=newNode(preorder[index_array]);
(*index)++;
if(array[index_array]=='N')
{
root->left=construct_preorder(preorder,array,index,n);
root->right=construct_preorder(preorder,array,index,n);
}
return root;

}
struct node *construct(int preorder[],char array[],int n)
{
 int index=0;
return construct_preorder(preorder,array,&index,n);
}
struct node *newNode(int info)
{
struct node *node=(struct node*)malloc(sizeof(struct node ));
node->data=info;
node->left=NULL;
node->right=NULL;
return (node);
}
void preorder(struct node *root)
{
if(root==NULL)
return ;
printf("%d\n",root->data);
preorder(root->left);
preorder(root->right);
printf("\n");
}
void inorder(struct node *root)
{

  if(root==NULL)
        return;
  inorder(root->left);
  printf("%d\n",root->data);
  inorder(root->right);

}
int main()
{
    struct node *root = NULL;

    /* Constructing tree given in the above figure
          10
         /  \
        30   15
       /  \
      20   5 */
    int pre[] = {10, 30, 20, 5, 15};
    char preLN[] = {'N', 'N', 'L', 'L', 'L'};
    int n = sizeof(pre)/sizeof(pre[0]);

    // construct the above tree
    root = construct (pre, preLN, n);

    // Test the constructed tree
    printf("Following is Inorder Traversal of the Constructed Binary Tree: \n");
    preorder(root);
inorder(root);
    return 0;
}
