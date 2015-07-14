#include <iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
void fun(int m, int n)
{

    vector<int>v;

    if(m<=2)
    {
        v.push_back(2);
        printf("%d\n",2);
        m=3;
    }
    for( int i=3;i<=n;i++)
    {
        for( int j=0;j<v.size() && v[j]<=sqrt(i);j++)
        {
            if(i%v[j]==0)
                goto remain;
                //break;
        }
        v.push_back(i);
        remain:;

    }

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>=m)
            printf("%d\n",v[i]);
    }

}
int main()
{
	int t;
	scanf("%d",&t);
	//cal();
	while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(!(1 <= x <= y <= 1000000000 && y-x<=100000))
                      return 0;
        fun(x,y);
        printf("\n");

    }


    //cout << "Hello World!" << endl;
    return 0;
}
