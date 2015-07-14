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
	if(i==n-1)
	return true;
	if(issafe(sword,enemy,i))
	{
		if(jungle(sword,enemy,i+1,n))
		return true;
	}
	return false;
}
bool cankill(int sword[],int enemy[],int n)
{
	int sword_count[n],enemy_count[n];
	int sword_number=0;
	int enemy_number=0;
	for(int i=0;i<111;i++)
	{
		sword_count[i]=0;
		enemy_count[i]=0;

	}
	for( int i=0;i<111;i++)
	{
		sword_count[i]++;

	}
	for(int i=0;i<110;i++)
	{
		enemy_count[i]++;
	}
	bool flag=true;
	for(int i=0;i<110 && (flag==true);i++)
	{
	sword_number+=sword_count[i];
	enemy_number+=enemy_count[i];
	if(sword_number>enemy_number)
	flag==false;

	}
	return flag;
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
		if(jungle(sword,enemy,0,n)==true && cankill(sword,enemy,n)==true)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
    //cout << "Hello World!" << endl;
    return 0;
}
