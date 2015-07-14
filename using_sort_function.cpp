#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[]={23,76,12,34,87,43,11,33};
sort(arr,arr+8);
for(int i=0;i<8;i++)
{
cout<<arr[i]<<endl;
}
return 0;
}
