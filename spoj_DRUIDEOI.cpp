#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<int,int>p[100009];
map<int,int>m;
map<int,int>m2;
void left(int arr[],int n)
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
        int next=-1;
        for(int j=i-1;j>0;j--)
        {
            if(arr[j]>arr[i])
            {
                next=arr[j];
                //cout<<next<<" ";
                break;
            }
        }
        if(next!=-1)
        {
           //printf("%d %d \n",next,m[next]);
           p[k++].first=m[next];
        }
        else
        {
            for(int j=n;j>i;j--)
            {
                if(arr[j]>arr[i])
                {
                    next=arr[j];
                    break;
                }
            }
            if(next!=-1)
                {
                    //printf("%d %d \n",next,m[next]);
                   p[k++].first=m[next];
                }
                else
                {
                     //printf("%d %d \n",next,next);
                   p[k++].first=next;
                }
        }
    }

}

int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		 int arr[n+5];
        bool visited[n+5];
        memset(visited,false,sizeof(visited));
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
			if(!visited[arr[i]])
            {
                m[arr[i]]=i;
            }
            visited[arr[i]]=true;
            m2[arr[i]]=i;

		}
		int k=0;
		for(int i=1;i<=n;i++)
		{
		   int  next=-1;
			for(int j=i+1;j<=n;j++)
			{
				if(arr[i]<arr[j])
				{
				    next=arr[j];
					//printf("%d %d \n",arr[i],m[arr[i]]);
					break;
				}
			}
			if(next!=-1)
			p[k++].second=m2[next];
			else
            {
                for(int j=1;j<i;j++)
                {
                    if(arr[j]>arr[i])
                    {
                        next=arr[j];
                        break;
                    }
                }
                if(next!=-1)
                {
                    //printf("%d %d \n",next,m[next]);
                    p[k++].second=m2[next];
                }
                else
                {
                    //printf("%d %d\n",next,next);
                    p[k++].second=next;
                }
            }
		}

left(arr,n);
for(int i=0;i<k;i++)
{
    printf("%d %d \n",p[i].first,p[i].second);
}
cout<<endl;
}
	return 0;

}
