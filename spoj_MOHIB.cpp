#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	long long int x,avg;
	scanf("%lld %lld",&x,&avg);
	long long int res=avg*avg -x*x+3*avg-3*x;
	printf("%lld\n",res/2);
}
	return 0;
}
