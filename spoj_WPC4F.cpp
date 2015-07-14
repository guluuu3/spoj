#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        scanf("%d",&n);
        int matrix[22][3];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d ",&matrix[i][j]);
            }
            scanf("\n");
        }
        for(int i=1;i<n;i++)
        {
            matrix[i][0]=matrix[i][0]+min(matrix[i-1][1],matrix[i-1][2]);
            matrix[i][1]=matrix[i][1]+min(matrix[i-1][0],matrix[i-1][2]);
            matrix[i][2]=matrix[i][2]+min(matrix[i-1][1],matrix[i-1][0]);
        }
        int res=min(matrix[n-1][0],min(matrix[n-1][1],matrix[n-1][1]));
        cout<<res<<endl;
    }
    return 0;
}
