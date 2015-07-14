#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void computeLPSArray(char *pat,long int M);
long int lps[10000];
void KMPSearch(char *pat,string txt,long int M)
{
    //int M = strlen(pat);
    int N = txt.size();


    int j  = 0;  // index for pat[]

    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M);

    int i = 0;  // index for txt[]
    while(i < N)
    {
      if(pat[j] == txt[i])
      {
        j++;
        i++;
      }

      if (j == M)
      {
        printf("%d\n", i-j);
        j = lps[j-1];
      }

      // mismatch after j matches
      else if(pat[j] != txt[i])
      {
        // Do not match lps[0..lps[j-1]] characters,
        // they will match anyway
        if(j != 0)
         j = lps[j-1];
        else
         i = i+1;
      }
    }
    //free(lps); // to avoid memory leak
}

void computeLPSArray(char *pat,long int M)
{
    int len = 0;  // lenght of the previous longest prefix suffix
    int i;

    lps[0] = 0; // lps[0] is always 0
    i = 1;

    // the loop calculates lps[i] for i = 1 to M-1
    while(i < M)
    {
       if(pat[i] == pat[len])
       {
         len++;
         lps[i] = len;
         i++;
       }
       else // (pat[i] != pat[len])
       {
         if( len != 0 )
         {
           // This is tricky. Consider the example AAACAAAA and i = 7.
           len = lps[len-1];

           // Also, note that we do not increment i here
         }
         else // if (len == 0)
         {
           lps[i] = 0;
           i++;
         }
       }
    }
    /*for(int i=0;i<M;i++)
    {
        cout<<lps[i]<<" ";
    }
    cout<<endl;//*/
}

// Driver program to test above function
int main()
{
    freopen("test.txt","r",stdin);
   long int t;
   while(scanf("%ld",&t)!=EOF)
    {
   char pat[t];
   scanf("%s",pat);
   string text;
   cin>>text;
   //cout<<pat<<endl;
   //long int lps[t];
   KMPSearch(pat,text,t);
   cout<<endl;


   }

   return 0;
}
