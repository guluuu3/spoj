#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void push(struct node **head_ref,int data)
{
struct node *new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
struct node *sortedIntersect(struct node *a,struct node *b)
{
if(a==NULL ||b==NULL)
return ;
if(a->data<b->data)
 return sortedIntersect(a->next,b);
if(a->data>b->data)
return sortedIntersect(a,b->next);
struct node *temp=(struct node*)malloc (sizeof(struct node));
temp->data=a->data;
temp->next=sortedIntersect(a->next,b->next);
return temp;
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

/* Drier program to test above functions*/
int main()
{
    /* Start with the empty lists */
    struct node* a = NULL;
    struct node* b = NULL;
    struct node *intersect = NULL;

    /* Let us create the first sorted linked list to test the functions
     Created linked list will be 1->2->3->4->5->6 */
    push(&a, 6);
    push(&a, 5);
    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    push(&a, 1);

    /* Let us create the second sorted linked list
     Created linked list will be 2->4->6->8 */
    push(&b, 8);
    push(&b, 6);
    push(&b, 4);
    push(&b, 2);

    /* Find the intersection two linked lists */
    intersect = sortedIntersect(a, b);

    printf("\n Linked list containing common items of a & b \n ");
    printList(intersect);

    return 0;
}
