#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>
struct node
{
	int id;
	int left;
	int right;
	struct node *next;
};
void print_graph(struct node *head);
void create_list(struct node *head1,struct node *head2);
void create_graph(struct node *head);


void push(struct node **head,int data1,int data2,int id)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->left=data1;
	newnode->right=data2;
	newnode->id=id;
	newnode->next=*head;
	*head=newnode;
}
//void combinationUtil(int arr[], int data[], int start, int end, int index, int r);
//void print_combinations(int arr[],int n,int r)

void printlist(struct node *head)
{

    struct node *current=head;
    while(current!=NULL)
    {
      printf("%d - %d Id is %d" ,  current->left ,current->right,current->id);
        printf("\n");
        current=current->next;


    }

}
void swap(int *a,int *b)
{
   int temp;
   temp=*a;
   *a=*b;
   *b=temp;
}
void permutate(int *arr,int r,int i,int n)
{
    int j ;
    int id=1;
    struct node *head=NULL;
    int *store=(int )malloc(sizeof(int)*r);

if(i==n)
{

		//printf("%d   %d",arr[n-1], arr[n-2]);
		//store[0]=arr[n-1];
		//store[1]=arr[n-2];
//to print the linked list
        printf("\n");
        printf("linked list is");
        push(&head,arr[n-1],arr[n-2],id);
        printlist(head);
	printf("\n");
}
else
for(j=i;j<=n;j++)
{
	swap(arr+i,arr+j);
	permutate(arr,r,i+1,n);
	swap(arr+i,arr+j);
}
return;
}


void create_graph(struct node *head)
{
	struct node *current;
	struct node *last=NULL;
	if(head==NULL)
	return;

		current=head;
		while(current->next!=last)
		{

		if((current->left+1==current->next->left) && (current->right+2==current->next->right) )
        {//Both Increases
		create_list(current,current->next);
		printf(" %d %d",current->left, current->next->left);
        }
     else	if((current->left+1==current->next->left) && (current->right-1==current->next->right))
//Player one increases and player two decreases  decreases
		create_list(current,current->next);
	 else	if((current->left-1==current->next->left) && (current->right-1==current->next->right))//Both decreases
		create_list(current,current->next);
	 else  if((current->left-1==current->next->left) && (current->right+2==current->next->right))//First increases and second decreeases
		create_list(current,current->next);
		else current=current->next;
		}
		last=current;
		struct node *ptr=head;
		while(ptr!=NULL)
        {
            print_graph(ptr);
            ptr=ptr->next;
        }

	return;
}
void create_list(struct node *head1,struct node *head2)
{
	if(head1==NULL ||head2==NULL)
	return;
struct node *current=head1;

while(current->next!=NULL)
{
	current=current->next;
}
current->next=head2;
head2->next=NULL;
}

void print_graph(struct node *head)
{
    struct node *current=head;
    while(current->next!=NULL)
    {
        printf("%d %d \n",current->left , current->right);
        current=current->next;
    }
return;
}

int main()
{
	int p,n1,n2,i;

	int k=0;
	printf("enter the number of players: ");
	scanf("%d",&p);
	printf("enter the starting number: ");
	scanf("%d",&n1);
	printf("enter the ending number: ");
	scanf("%d",&n2);
	int *arr=(int)malloc(((n2-n1)-1)*sizeof(int));

	for( i=n1+1;i<n2;i++)
	{
		arr[k]=i;
		k++;
	}
	for( i=0;i<(n2-n1-1);i++)
	printf("%d \n",arr[i]);

	int total=pow((n2-n1-1),p);
	printf("Total number of nodes in graph : %d",total);
	printf("\n");
	permutate(arr,p,0, (n2-n1-2));//permutation calls with one less node than than the total number of nodes

	return 0;

	}


