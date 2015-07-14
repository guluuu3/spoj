#include <iostream>
using namespace std;

int searchzero(int x,int y,char str[][20],int c);
void change(int x,int y,char str[][20],int c)
{
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			if(str[i][j]=='1')
			    str[i][j]='0';
			if(str[i][j]=='0')
			    str[i][j]='1';
		}
	}
	searchzero(x,y,str,c);
	return;
}

int searchzero(int x,int y,char str[][20],int c)
{

	for(int i=x;i>0;i--)
	{
		for(int j=y;j>0;j--)
		{
			if(str[i][j]=='0')
			{
			    //cout<<i<<j;
			    c++;
				cout<<c<<endl;
				change(i,j,str,c);

				break;
			}
		}
	}
	return  c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int M,N;
		cin>>M>>N;
		char str[20][20];
		for(int i=0;i<N+1;i++)
		{
			str[0][i]='x';

		}
		for(int i=0;i<M+1;i++)
		{
			str[i][0]='x';
		}
		for(int i=1;i<M+1;i++)
		{
			for(int j=1;j<N+1;j++)
			{
				cin>>str[i][j];
			}
		}

         int c=0;
		cout<<searchzero(M,N,str,c)<<endl;;


	}
    //cout << "Hello World!" << endl;
    return 0;
}
