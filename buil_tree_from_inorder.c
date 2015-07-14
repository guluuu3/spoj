#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *right;
struct node *left;

};
struct node *newNode(int info);

 struct node *build_tree(int inorder[],int start,int end)
 {
 if(start>end)
 return NULL;
 int i=max(inorder,start,end);
 struct node *root= newNode(inorder[i]);
 if(start==end)
 return root;
 root->left=build_tree(inorder,start,i-1);
 root->right=build_tree(inorder,i+1,end);
 return root;

 }
 int max(int inorder[],int start,int end)
 {
 int i;
 int max,maxind;
 max=inorder[start];
 maxind=start;
 for(i=start+1;i<=end;i++)
 {

 if(max<inorder[i])
 {
 max=inorder[i];
 maxind=i;
}
 }
 return maxind;
 }
 struct node *newNode(int info)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = info;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* This funtcion is here just to test buildTree() */
void printInorder (struct node* node)
{
    if (node == NULL)
        return;

    /* first recur on left child */
    printInorder (node->left);

    /* then print the data of node */
    printf("%d ", node->data);

    /* now recur on right child */
    printInorder (node->right);
}

/* Driver program to test above functions */
int main()
{
   /* Assume that inorder traversal of following tree is given
         40
       /   \
      10     30
     /         \
    5          28 */

    int inorder[] = {5, 10, 40, 30, 28};
    int len = sizeof(inorder)/sizeof(inorder[0]);
    struct node *root = build_tree(inorder, 0, len - 1);

    /* Let us test the built tree by printing Insorder traversal */
    printf("\n Inorder traversal of the constructed tree is \n");
    printInorder(root);
    return 0;
}
