#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    pair<string ,int>p;
    pair<string,int>arr[100000];
    int k=0;
    while(getline(cin,p))
    {
        cin>>p.first>>p.second;
        arr[k].first=p.first;
        arr[k].second=p.second;
        k++;
        //cout<<p.first<<p.second<<endl;
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }

    return 0;
}
