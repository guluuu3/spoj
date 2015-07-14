#include <iostream>
#include<algorithm>
#include<climits>
#include<cstdio>

using namespace std;
long long int sum=0;
int result=0;
int compare(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void combinationUtil(int arr[],int n,int r,int index,int data[],int i);

void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, n, r, 0, data, 0);
}
void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r)
    {
          int ans=INT_MAX;

             //cout<<data[j];

             //qsort(data,r,sizeof(int),compare);
             for(int j=0;j<r;j++)
             {
                 ans=min(ans,data[j]);
             }
             sum=sum+ans;


        return;
    }


    if (i >= n)
        return;

    // current is included, put next at next location
    data[index] = arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);


    combinationUtil(arr, n, r, index, data, i+1);
}
int main()
{    int t,n,r;
     int arr[100000];
	//cout<<"enter the number of test cases:";
	cin>>t;
	while(t--)
	{


		//cout<<"enter the number of students:";
		cin>>n>>r;
		//cout<<"enter the number of selection:";


		for(int i=0;i<n;i++)
		{
			//cout<<"enter the strengths:";
			scanf("%d",&arr[i]);
		}
		printCombination(arr,n,r);
		//cout<<sum<<endl;
		result=sum-result;
		cout<<result<<endl;



	}
    //cout << "Hello World!" << endl;
    return 0;
}
