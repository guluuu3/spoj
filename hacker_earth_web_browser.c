    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    int length(char s[])
    {
    int i,len,n=1;
    len=strlen(s);
    for(i=4;i<len;i++)
    {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    continue;
    else
    n++;
    }
    return n;
    }
    int main()
    {
    int n,len,no,i;
    char s[200];
    scanf("%d",&n);
    if(n>=1&&n<=100)
    {
    for(i=0;i<n;i++)
    {
    scanf("%s",s);
    len=strlen(s);
    if(!(len<=200))
    break;
    no=length(s);
    printf("%d/%d\n",no,len);
    }
    }
    else
    return 0;
    }
