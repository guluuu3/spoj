#include <iostream>
using namespace std;
int main()
{
 int BitsSetTable256[256];
BitsSetTable256[0] = 0;
for (int i = 0; i < 256; i++)
{
  BitsSetTable256[i] = (i & 1) + BitsSetTable256[i / 2];
}
int t;
cin>>t;
while(t--)
{
    unsigned int v; // count the number of bits set in 32-bit value v                // c is the total bits set in v
    unsigned int u;
    unsigned int total=0;

// Option 1:
cin>>u>>v;
for(int i=u;i<=v;i++)
{
    unsigned int c;
    c = BitsSetTable256[i & 0xff] +
    BitsSetTable256[(i >> 8) & 0xff] +
    BitsSetTable256[(i >> 16) & 0xff] +
    BitsSetTable256[i >> 24];
    total=total+c;
}
cout<<total<<endl;
}
    return 0;
}
