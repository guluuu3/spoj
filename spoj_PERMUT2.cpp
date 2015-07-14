#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	while(scanf("%d",&t))
	{
		if(t==0)
			break;
		int arr[t+5];
		for(int i=0;i<t;i++)
		{
			scanf("%d ",&arr[i]);
		}
        long long int index[100005];
        for(int i=0;i<t;i++)
        {
        	index[arr[i]-1]=i+1;
        }
        bool flag=true;
        for(int i=0;i<t&&flag==true;i++)
        {
        	if(arr[i]!=index[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==false)
        {
            printf("not ambiguous\n");
        }
        else if(flag==true)
        {
            printf("ambiguous\n");
        }



	}
	return 0;
}
