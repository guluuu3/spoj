#include <iostream>
#include<math.h>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<conio.h>
using namespace std;

int main()
{
	int n;
	int a,b;
	while(n--)
	{

		cin>>a>>b;
		while(a>0)
        {
            if( (a^b )>a)
            {

                cout<<"Dont Play";
                break;
            }
          else  if(a^b==0)
            {
               a=0;
               break;
            }

            else
            a=a-(a^b);
        }
        if(a==0)
            cout<<"Play";



	}
	cout<<endl;
    //cout << "Hello World!" << endl;
    return 0;
}
