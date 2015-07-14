#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
bool issafe(int swords[],int enemy[],int i)
{
	if(swords[i]>enemy[i])
	return true;
	else
	return false;
}
bool jungle(int sword[],int enemy[],int i,int n)
{
	if(i==n)
	return true;
	if(issafe(sword,enemy,i))
	{
		if(jungle(sword,enemy,i+1,n))
		return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sword[n];
		int enemy[n];
		for(int i=0;i<n;i++)
		{
			cin>>enemy[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>sword[i];
		}
		sort(enemy,enemy+n);
		sort(sword,sword+n);
		if(jungle(sword,enemy,0,n)==true)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
