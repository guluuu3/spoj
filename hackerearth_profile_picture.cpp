#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l,n,b,h;
    cout<<"enter the length ";
    cin>>l;
    cout<<"enter the number of inputs";
    cin>>n;
    while(n--)
    {
    	cout<<"enter the height abd breadth";
    	cin>>b>>h;
    	if(b==l && h==l)
    	cout<<"ACCEPTED"<<endl;
    	else if (b>l || h>l)
    	cout<<"CROP IT"<<endl;
    	else if(b<l || h<l)
    	cout<<"UPLOAD ANOTHER"<<endl;

    }
    return 0;
}
