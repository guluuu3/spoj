#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,money;
long long int matrix_length[105][105];
long long int matrix_cost[105][105];
int length_ans;
bool visited[105];
//template<class T> priority_queue<T, std::vector<T>, std::greater<T>>;
int main()
{
    //freopen("test.txt","r",stdin);
    int n;
    scanf("%d",&n);
    priority_queue<int, std::vector<int>, std::greater<int> > Q;
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        Q.push(x);
    }
    while(!Q.empty())
    {
        cout<<Q.top()<<" ";
        Q.pop();
    }

    return 0;
}
