#include <bits/stdc++.h>
using namespace std;
 int ispalindromic(int n)
 {
 	int k=0;
 	int arr[10];
 	while(n!=0)
 	{
 		arr[k++]=n%10;
 		n/=10;
 	}
 	int i=0;
 	int j=k-1;
 	while(i<j)
 	{
 		if(arr[i]!=arr[j])
 		{
 			return 0;
 		}
 		i++;
 		j--;
 	}

 	return 1;
 }
int main()
{
	int a,b;
	int n;
    //cout<<"enter the number of inputs:";
	cin>>n;

	while(n--)
    {
       cin>>a>>b;
       int count=0;
       for(int i=a;i<=b;i++)
       {
           if(ispalindromic(i)==1)
           count++;
       }
       cout<<count<<endl;
    }

    return 0;
}




