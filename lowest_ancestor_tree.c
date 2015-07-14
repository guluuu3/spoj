#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *lchild;
struct node *rchild;
};
struct node *newNode(int data)
{
struct node *node=(struct node *)malloc(sizeof(struct node));
node->lchild=NULL;
node->rchild=NULL;
node->info=data;


}
 struct node *lca(struct node *root,int n1,int n2)
 {
 if(root==NULL)
 return ;
 if(root->info>n1 &&root->info>n2)
 return lca(root->lchild,n1,n2);
 if(root->info<n1 && root->info<n2)
 return lca(root->rchild,n1,n2);

return root;
 }
 int main()
{
    // Let us construct the BST shown in the above figure
    struct node *root        = newNode(20);
    root->lchild               = newNode(8);
    root->rchild              = newNode(22);
    root->lchild->lchild         = newNode(4);
    root->lchild->rchild        = newNode(12);
    root->lchild->rchild->lchild  = newNode(10);
    root->lchild->rchild->rchild = newNode(14);

    int n1 = 10, n2 = 14;
    struct node *t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->info);

    n1 = 14, n2 = 8;
    t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->info);

    n1 = 10, n2 = 22;
    t = lca(root, n1, n2);
    printf("LCA of %d and %d is %d \n", n1, n2, t->info);

    getchar();
    return 0;
}
