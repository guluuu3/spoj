#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std
struct suffix
{
int index;
char *suff;
}
int compare(struct suffix a,struct suffix b)
{
return strcmp(a.suff,b.suff)<0?1:0;

}
int build_suffix_array(char *txt,int n)
{
struct suffix suffixes[n];
for(i=0;i<n;i++)
{
suffixes[i].index=i
suffixes[i].suff=(text+i);
}
int *suffix_array=new int[n];
for(int i=0;i<n;i++)
{
    sufix_array[i]=suffixes[i].index;
}
return suffix_array;
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
int main()
{
    char txt="banana";
    int n=strln(txt);
    int *suffixarray=build_suffix_array(txt,n);
    print(suffixarray,n);
    return 0;

}
