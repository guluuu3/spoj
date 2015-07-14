#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(long long int n,long long int price[])
{
    if (n == 1)
        return;
    int count = 0;
    pair<long long int ,long long int> sol[n + 1];
    int i = 0;
    while (i < n-1)
    {
        while ((i < n-1) && (price[i+1] <= price[i]))
            i++;


        if (i == n-1)
            break;


        sol[count].first = i++;
        while ((i < n) && (price[i] >= price[i-1]))
            i++;
        sol[count].second = i-1;
        count++;
    }
       long long int sum=0;
       for (int i = 0; i < count; i++)
          sum=sum +(price[sol[i].second]-price[sol[i].first]);

cout<<sum<<endl;
    return;
}
int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,k;
		scanf("%lld %lld",&n,&k);

		long long int arr[n+5];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}

		solve(n,arr);
	}
	return 0;

}
