#include<iostream>
#include<cstring>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct suffix
{
int index;
char *suff;
};
int compare(struct suffix a,struct suffix b)
{
return strcmp(a.suff,b.suff)<0?1:0;

}
int *build_suffix_array(char *txt,int n)
{
struct suffix suffixes[n];
for(int i=0;i<n;i++)
{
suffixes[i].index=i;
suffixes[i].suff=(txt+i);
}
sort(suffixes,suffixes+n,compare);
int *suffix_array=new int[n];
struct suffix suffix_char[n];
for(int i=0;i<n;i++)
{


    suffix_array[i]=suffixes[i].index;
    suffix_char[i].suff=suffixes[i].suff;
    cout<<suffix_char[i].suff<<endl;
}
return (suffix_array);
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
void search(char *pat,char *txt,int *suffix_array,int n)
{
    int m=strlen(pat);
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=l+(r-1)/2;
        int res=strcmp(pat,(txt+suffix_array[mid]));
        if(res==0)
            cout<<"array found at"<<suffix_array[mid];
        return;
         if(res<0)
            mid=r-1;
         else
            l=mid+1;
    }

        cout<<"pattern not found"<<endl;

}

int main()
{
     char txt[100];
    char pat[100];
    scanf ("%[^\n]%*c", txt);
    scanf ("%[^\n]%*c", pat);
    int n=strlen(txt);
    int *suffixarray=build_suffix_array(txt,n);
    print(suffixarray,n);
    search(pat,txt,suffixarray,n);
    return 0;

}
