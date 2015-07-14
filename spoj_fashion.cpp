#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int compare(const void *a,const void *b)
{
    return (*(int*)b -*(int*)a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int men[n];
        int women[n];
        for(int i=0;i<n;i++)
        {
            cin>>men[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>women[i];
        }
        qsort(men,n,sizeof(int),compare);
        qsort(women,n,sizeof(int),compare);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+men[i]*women[i];
        }
        cout<<sum<<endl;

    }
    return 0;
}
