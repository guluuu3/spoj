    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
    int n,sum=0;
    scanf("%d",&n);
    int i=5;
    for(;i<n;i*=5)
    {
    sum+= n/i;
    }
    printf("%d",sum);
    return 0;
    }
