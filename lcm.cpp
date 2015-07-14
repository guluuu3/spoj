#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
       return  gcd(b,a%b);
}
int lcm(int arr[],int n)
{
    int res=1;
    for(int i=0;i<n;i++)
        res=res*arr[i]/(gcd(res,arr[i]));
    return res;
}
void printPowerSet(char *set, int set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;

    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
           int k=0;
           vector<char>v;
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
          {
              //printf("%c", set[j]);
              v.push_back(set[j]);

          }
          vector<char>::iterator it;
          for(it=v.begin();it!=v.end();it++)
          {
              cout<<*it;
          }



       }


       printf("\n");
    }
}
int main()
{
  char set[] = {'1','2','3'};

    //cout<<lcm(arr,5);
    printPowerSet(set,3);
    return 0;

}
