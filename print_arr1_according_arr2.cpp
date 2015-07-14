#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int arr[],int low,int high,int x,int n)
{
if(high>=low)
{
int mid=low-(high-low)/2;
if(mid==0||x>arr[mid-1]&&arr[mid]==x)
return mid;
if(x>arr[mid])
return binary_search(arr,mid+1,high,x,n);
return binary_search(arr,low,mid-1,x,n);

}
return -1;

}
void sort_order(int arr1[],int arr2[],int m,int n)
{
int i,temp[m],visited[m];
for(i=0;i<m;i++)
{
temp[i]=arr1[i];
visited[i]=0;
}
sort(temp,temp+m);
int ind=0;

for(i=0;i<n;i++)
{
int f=binary_search(temp,0,m-1,arr2[i],m);
if(f==-1)
continue;
for(int j=f;(j<m&&temp[j]==arr2[i]);j++)
{
arr1[ind++]=temp[j];
visited[j]=1;

}


}

for(i=0;i<m;i++)
{
if(visited[i]==0)
arr1[ind++]=temp[i];
}
}
void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int A2[] = {2, 1, 8, 3};
    int m = sizeof(A1)/sizeof(A1[0]);
    int n = sizeof(A2)/sizeof(A2[0]);
    cout << "Sorted array is \n";
    sort_order(A1, A2, m, n);
    printArray(A1, m);
    return 0;
}
