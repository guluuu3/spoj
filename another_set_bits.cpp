#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<climits>
using namespace std;
typedef long long ll;
ll f(ll num) {
    if(num==0) return 0;
    if(num==1) return 1;
    else {
        ll pos;
        for(int i=31;i>=0;i--) {
            if(num&(1<<i)) {
                pos=i;
                break;
            }
        }
        ll pw=(1<<pos);
        return pos*(1<<(pos-1))+f(num-pw)+(num-pw+1);
    }
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        ll a,b;N
        scanf("%lld%lld",&a,&b);
        printf("%lld\012",f(b)-f(a-1));
    }
    return 0;
}
