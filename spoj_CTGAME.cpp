#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int arr[x][y];
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                char m;
                scanf("%c",&m);
                if(m=='R')
                    arr[i][j]=0;
                else if(m=='F')
                arr[i][j]=1;
            }
        }
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        cout<<endl;
    }
    return 0;
}
