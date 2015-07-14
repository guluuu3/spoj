#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define p pair<int,int>
struct node
{
	struct node *left;
	struct node *right;
	int data;
	int fre;
};
struct predicate
{
    bool operator()(const std::pair<int, int> &left, const std::pair<int, int> &right)
    {
         return left.second >right.second;
    }
};

struct node* newnode(int data)
 {
 	struct node* node1= new node;
 	node1->left=NULL;
 	node1->right=NULL;
 	node1->data=data;
 	node1->fre=1;
	return (node1);
 }
 struct node *insert(struct node* root,int key)
 {
 	if(root==NULL)
 		return (newnode(key));
    if(root->data==key)
 		root->fre += 1;
 	else if(root->data>key)
 		root->left=insert(root->left,key);
 	else root->right=insert(root->right,key);
 	return root;
 }
 void store(struct node *root,pair<int,int>count[],int *index)
 {
 	if(root==NULL)
 		return;
 	store(root->left,count,index);
 	count[(*index)].second=root->fre;
 	count[(*index)].first=root->data;
 	(*index)++;
 	store(root->right,count,index);

 }

 void sort_frequency(int arr[],int n)
 {
 	struct node *root=NULL;
 	for(int i=0;i<n;i++)
 	{
 		root=insert(root,arr[i]);
 	}
    pair<int,int>count[n+5];
    int index =0;
 	store(root,count,&index);

 	//qsort(count, index, sizeof(count[0]), compare);
 	stable_sort(count,count+index, predicate());
 	/*for(int i=0;i<index;i++)
    {
        cout<<count[i].second<< " ";
    }
    cout<<endl;*/
 	int j=0;
 	for(int i=0;i<index;i++)
 	{
 		for(int f=count[i].second;f>0;f--)
 		{
 			arr[j++]=count[i].first;
 		}
 	}

for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
return ;
}
int main()
{
	freopen("test.txt","r",stdin);
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n+5];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

	}
	sort_frequency(arr,n);
	printf("\n");
	return 0;
}
