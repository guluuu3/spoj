#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
struct ListNode
{
    int data;
    ListNode* next;
};

// Binary tree node structure
struct BinaryTreeNode
{
    int data;
    BinaryTreeNode *left, *right;
};
BinaryTreeNode* newBinaryTreeNode(int data)
{
    BinaryTreeNode *temp = new BinaryTreeNode;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void push(struct ListNode** head_ref, int new_data)
{
    // allocate node and assign data
    struct ListNode* new_node = new ListNode;
    new_node->data = new_data;

    // link the old list off the new node
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref)    = new_node;
}
void convertList2Binary(ListNode *head, BinaryTreeNode* &root)
{
     queue<BinaryTreeNode *> q;
if(head==NULL)
{
root=NULL;
return;
}
root=newBinaryTreeNode(head->data);
q.push(root);
head=head->next;

while(head)
{
 BinaryTreeNode *parent=q.front();
q.pop();
 BinaryTreeNode *leftchild=NULL,*rightchild=NULL;
 leftchild=newBinaryTreeNode(head->data);
 q.push(leftchild);
 head=head->next;
 if(head)
 {
 rightchild = newBinaryTreeNode(head->data);
            q.push(rightchild);
            head = head->next;
        }


        parent->left = leftchild;
        parent->right = rightchild;
 }
}

void inorderTraversal(BinaryTreeNode* root)
{
    if (root)
    {
        inorderTraversal( root->left );
        cout << root->data << " ";
        inorderTraversal( root->right );
    }
}
int main()
{


// Driver program to test above functions

    // create a linked list shown in above diagram
    struct ListNode* head = NULL;
    push(&head, 36);  /* Last node of Linked List */
    push(&head, 30);
    push(&head, 25);
    push(&head, 15);
    push(&head, 12);
    push(&head, 10); /* First node of Linked List */

    BinaryTreeNode *root;
    convertList2Binary(head, root);

    cout << "Inorder Traversal of the constructed Binary Tree is: \n";
    inorderTraversal(root);
    return 0;
}

