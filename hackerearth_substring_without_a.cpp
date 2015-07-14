#include <iostream>
#include<string>
#include<stdlib.h>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		string str;
		cin>>str;

		int n=str.size();
		long long int total=(n*(n+1))/2;
		cout<<total<<endl;
		long long int sum=0;

		//int x;
            int k=0;

       for(int i=0;i<=str.size();i++)
       {
         while(str[i]=='a' || str[i]=='z'|| str[i]== '\0')
			{
				sum=sum+(k*(k+1))/2;
				k=0;
			}

            else
                k++;
                //cout<<k<<" ";
            }
            total=total-sum;
		    cout<<total;
	  }
    //cout << "Hello World!" << endl;
    return 0;
}
