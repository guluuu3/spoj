#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<long long int,long long int>p[100000009];
map<long long int, long long int>m;
map<long long int,long long int>m2;
void nge(long long int arr[], long long int n)
{
    bool visited[1000000];
    memset(visited,false,sizeof(visited));
    long long int i;
    stack<long long int>s;
    long long int element, next;
    s.push(arr[1]);
    int k=0;
    for (i=2; i<=n; i++)
    {
        next = arr[i];
        if (!s.empty())
        {
            element = s.top();
            s.pop();
              while (element < next)
              {
                //printf("\n %d --> %d", element, next);
                p[element].second=m2[next];
                visited[element]=true;


                //printf("%d\n",m2[next]);
                //p[element].second=m2[next];
                if(s.empty())
                   break;
                element = s.top();
                s.pop();
              }
            if (element > next)
               s.push(element);
        }
        if(!visited[next])
      s.push(next);
    }

int index;

if(!s.empty())
{
element=s.top();
index=m2[element];
//cout<<new_element << " " <<index<<endl;
for (i=1; i<index; i++)
    {

        next = arr[i];
        if (!s.empty())
        {
            element = s.top();
            s.pop();
              while (element < next)
              {
                //printf("\n %d --> %d", element, next);
                visited[element]=true;
                //printf("%d\n",m2[next]);
                p[element].second=m2[next];
                if(s.empty())
                   break;
                element = s.top();
                s.pop();
                if(!s.empty())
                {
                    long long int new_element=s.top();
                    index=m2[new_element];
                }
              }
            if (element > next)
            {
                 s.push(element);
                 long long int new_element=s.top();
                 index=m2[new_element];
            }

        }
        if(!visited[next])
        {
             s.push(next);
      int new_element=s.top();
      index=m2[new_element];
        }

    }

}
//cout<<s.empty()<<" ";

    while (!s.empty())
    {
        element = s.top();
        s.pop();
        next = -1;

        //printf("\n %d --%d", element, next);
       // printf("%d\n",next);
       p[element].second=next;
    }
/*for(int i=1;i<=n;i++)
{
    printf("%d ",p[arr[i]].second);
}
cout<<endl;*/


}

void nge2(long long int arr[], long long int n)
{
    long long int i;
    stack<long long int>s;
    int element, next;
    s.push(arr[1]);
    int k=0;
    for (i=2; i<=n; i++)
    {
        next = arr[i];
        if (!s.empty())
        {
            element = s.top();
            s.pop();
              while (element < next)
              {
               // printf("\n %d --> %d", element, next);
                p[element].first=m[next];


                //printf("%d\n",m2[next]);
                //p[element].second=m2[next];
                if(s.empty())
                   break;
                element = s.top();
                s.pop();
              }
            if (element > next)
               s.push(element);
        }
      s.push(next);
    }

int index;
if(!s.empty())
{
element=s.top();
index=m[element];
//cout<<new_element << " " <<index<<endl;
for (i=1; i<index; i++)
    {

        next = arr[i];
        if (!s.empty())
        {
            element = s.top();
            s.pop();
              while (element < next)
              {
               // printf("\n %d --> %d", element, next);
                //printf("%d\n",m2[next]);
                p[element].first=m[next];
                if(s.empty())
                   break;
                element = s.top();
                s.pop();
                if(!s.empty())
                {
                    long long int new_element=s.top();
                    index=m[new_element];
                }
              }
            if (element > next)
            {
                 s.push(element);
                long long int new_element=s.top();
                 index=m[new_element];
            }

        }
      s.push(next);
    }

}

    while (!s.empty())
    {
        element = s.top();

        s.pop();
        next = -1;

        //printf("\n %d --%d", element, next);
       // printf("%d\n",next);
       p[element].first=next;
    }
/*for(int i=n;i>0;i--)
{
    printf("%d  ",p[arr[i]].first);
}
cout<<endl;*/

}
int main()
{
	freopen("test.txt","r",stdin);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		 long long int arr[n+5];
        bool visited[1000000];
        memset(visited,false,sizeof(visited));
		for(long long int i=1;i<=n;i++)
		{
			scanf("%lld",&arr[i]);
			if(!visited[arr[i]])
            {
                m[arr[i]]=i;
            }
            visited[arr[i]]=true;
		}
		for(long long int i=1;i<=n;i++)
        {
            m2[arr[i]]=i;
        }
		nge(arr,n);
		long long int dummy[n+5];
		for(long long int i=1;i<=n;i++)
        {
            dummy[i]=arr[n-i+1];
        }
        /*for(int i=1;i<=n;i++)
        {
            cout<<dummy[i]<<" ";
        }*/
        nge2(dummy,n);

for(long long int i=1;i<=n;i++)
{
    printf("%lld %lld\n",p[arr[i]].first,p[arr[i]].second);
}

	}
	return 0;

}
