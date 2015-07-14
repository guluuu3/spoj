#include<iostream>
using namespace std;
int max1(int a,int b)
{

    return (a>b?a:b);
}
int max(int a, int b, int c)
{
     return max1(a, max1(b, c));
}
int max_product_rod(int n)
{int max_val=1;
    int i,j;
	int l[n+1];

	l[0]=0;
	l[1]=0;

	for(i=1;i<n;i++)
	{
		for( j=1;j<=i/2;j++)
		{
			max_val=max(max_val,j*(i-j),j*l[i-j]);
			l[i]=max_val;
		}
	}
	return max_val;
}

//int max(int a, int b, int c) { return max(a, max(b, c));}
int main(void)
{
	cout << "Maximum Product is " << max_product_rod(10);
    return 0;
}
