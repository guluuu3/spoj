#include <iostream>
using namespace std;
long long int a[10000][10000]={0};
long  long int  function(int x,int y)
{
	if(a[x][y])
	return a[x][y];
	if(x==0)
	return  a[x][y]=(y+1)%1000;
	if(x>0 && y==0)
	return  a[x][y]=function(x-1,1)%1000;
	if(x>0 && y>0)
	return  a[x][y]=function(x-1,function(x,y-1))%1000;


}



int main()
{
   	int a,b;
   int arr[100];
	cin>>a>>b;
long long int x=function(a,b);
	arr[0]=x%10;
	x/=10;
	arr[1]=x%10;
	x/=10;
	arr[2]=x%10;
	cout<<arr[2]<<arr[1]<<arr[0];

    //cout << "Hello World!" << endl;
    return 0;
}
