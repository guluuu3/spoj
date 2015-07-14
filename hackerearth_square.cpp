#include <iostream>
#include<stdio.h>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
    double square_value1=sqrt(n);
	long long int square_value=sqrt(n);
	//cout<<square_value<<square_value1<<endl;
	bool flag=false;

		if(square_value==square_value1)
		{
			flag=true;
			//break;
		}

	if(flag==true)
	{
		cout<<"YES"<<endl;
	}
	if(flag==false)
	{
		cout<<"NO"<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
