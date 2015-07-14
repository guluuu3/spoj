#include <iostream>
using namespace std;
#define MAX 1000009
long long unsigned int santa[MAX],banta[MAX],ganta[MAX];
void distance()
{
	santa[0]=0,banta[0]=0,ganta[0]=0;
	santa[1]=1,banta[1]=2,ganta[1]=6;
	for(long long int i=2;i<MAX;i++)
	{
		santa[i]=2*banta[i-1]+2*ganta[i-1];
		banta[i]=2*ganta[i-1]+2*santa[i];
		ganta[i]=2*santa[i]+2*banta[i];
	}
}
int main()
{
    distance();
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int x;
		cin>>x;
		long long int sum=santa[x]+banta[x]+ganta[x];
		cout<<sum<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
