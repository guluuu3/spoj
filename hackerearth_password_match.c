    #include <stdio.h>
    #include <string.h>

    int main()
    {
    int N,i,j,k;
    char str[100][15];
    int len1,len2,neq;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    scanf("%s",str[i]);
    }
    for(i=0;i<N;i++)
    {
    for(j=i+1;j<N;j++)
    {
    len1 = strlen(str[i]);
    len2 = strlen(str[j]);
    neq = 0;
    if(len1==len2)
    {
    for(k=0;k<len1;k++)
    {
    if(str[i][k]!=str[j][len1-k-1])
    {
    neq = 1;
    break;
    }
    }
    if(neq!=1)
    {
    printf("%d %c",len1,str[i][len1/2]);
    }
    }
    }
    }
    return 0;
    }
