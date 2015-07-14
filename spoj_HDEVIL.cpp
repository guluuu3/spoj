#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
bool isPerfectSquare(ull  x)
{
    int s = sqrt(x);
    return (s*s == x);
}

bool isfibo(ull  n)
{
    return isPerfectSquare(5*n*n + 4) ||
               isPerfectSquare(5*n*n - 4);
}

int main()
{
    freopen("test.txt","r",stdin);
	int t;
	scanf("%i",&t);

	for(int tt=1; tt <= t; tt++)
	{

       ull n, m;
        scanf("%llu %llu", &n, &m);
        ull sumdiv = 1, i;
        for(i=2; i*i < n; i++) {
            if (n%i == 0){
                sumdiv += i+(n/i);
            }
        }

        if (i*i == n)
            sumdiv += i;
        sumdiv = sumdiv % m;
        ull count=1;
        for(i=2; i*i < sumdiv; i++) {
            if (sumdiv%i == 0)
                count+=2;
        }
        if (i*i == sumdiv)
            count++;

		if(isfibo(count))
		{
			printf("Case #%i : YES.\n",tt );
		}
		else if (!isfibo(count))
		{
			prinNtf("Case #%i : No.\n",tt);
		}

	}
	return 0;
}
