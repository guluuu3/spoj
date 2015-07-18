#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
vector<long long int>gaps={0,1,2};
vector<long long int>fib={0,1};
long long int pow(long long int  x, long long int a) {
    long long int  y = 1;
    while(a) {
        if (a & 1)
            y = (y * x) % MOD;
        x = (x * x) % MOD;
        a >>= 1;
    }
    return y;
}

/*long long int nonfib(long long int n)
{
	vector<long long int>fib={2,3,5};

	vector<long long int>gaps={0,1,2};


	for(int i=3;i<n;i++)
	{
		fib.push_back((fib[i-1]+fib[i-2])%MOD);
	}

	for(int i=3;i<n;i++)
	{
		gaps.push_back((gaps[i - 1] + gaps[i - 2] + 1)%MOD);
	}
	long long int  ans;
	//cout<<gaps.size()<<endl;
	partial_sum(gaps.begin(), gaps.end(), gaps.begin());
	for(int i=1;i<gaps.size();i++)
	{
		if(gaps[i]>=n)
		{
			ans=(fib[i]+(n-gaps[i-1]));
			break;
		}
	}

return ans;

}*/
long long int findnonfib(long long int n)
{
    long long int ans;
    for(long long int i=1;i<gaps.size();i++)
	{
		if(gaps[i]>=n)
		{
			ans=(fib[i+3]+(n-gaps[i-1]));
			break;
		}
	}
	return ans;
}
int main()
{
    //freopen("test.txt","r",stdin);

	/*for(int i=3;i<10000009;i++)
	{
		fibs.push_back((fibs[i-1]+fibs[i-2])%MOD);
	}*/
	for(long long int i=2;i<10000009;i++)
    {
        fib.push_back((fib[i-1]+fib[i-2])%MOD);
    }
	for(long long int i=3;i<10000009;i++)
	{
		gaps.push_back((gaps[i - 1] + gaps[i - 2] + 1));
	}
     partial_sum(gaps.begin(), gaps.end(), gaps.begin());




	//fib[0]=0,fib[1]=1;


    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);

        printf("%lld\n",pow(findnonfib(n),fib[n]%MOD));

    }

	return 0;
}
