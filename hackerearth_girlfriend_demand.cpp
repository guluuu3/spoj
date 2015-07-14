#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	string str;
	int len=str.size();
	cin>>str;
    int n;
	cin>>n;
	long long   a,b;
	while(n--)
	{

		scanf("%lld %lld",&a,&b);
		a--;
		b--;
		a=a%len;
		b=b%len;
		if(str[a]==str[b])
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;

	}

    //cout << "Hello World!" << endl;
    return 0;
}
