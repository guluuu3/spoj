#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void  compute( char str[])
{
 int n=strlen(str);
 //cout<<str<<endl;
   if(n==0)
    return ;
   n=2*n+1;
    int L[n];
   L[0]=0;
   L[1]=1;
   int c=1;
   int i=0;
   int i_mirror;
   int r=2;
   int max_lps_length=0;
   int max_lps_center_position=0;
   int start=-1;
   int end=-1;
   int diff=-1;
   for(int i=2;i<n;i++)
   {
      i_mirror=2*c-i;
      L[i] =0;
      diff=r-i;
      if(diff>0)
      {
          L[i]=min(L[i_mirror],diff);
      }
     while ( ((i + L[i]) < n && (i - L[i]) > 0) &&
            ( ((i + L[i] + 1) % 2 == 0) ||
            (str[(i + L[i] + 1)/2] == str[(i - L[i] - 1)/2] )))
        {
            L[i]++;
        }

   if(L[i]>max_lps_length)
   {
       max_lps_length=L[i];
       max_lps_center_position=i;
   }
   if(i+L[i]>r)
   {
       c=i;
       r=i+L[i];
   }
   //printf("%d",L[i]);
   }
   /*int maxi=0;
   for(int i=1;i<n;i++)
   {
       if(L[i]>maxi)
        maxi=L[i];
   }
   printf("%d\n",maxi);*/
   start = (max_lps_center_position - max_lps_length)/2;
    end = start + max_lps_length - 1;
    printf("%d\n",end-start+1);//<<endl;
}
int main()
{
    int t;
    scanf("%d",&t);
    char str[t];
    scanf("%s",str);
    compute(str);
    return 0;
}
