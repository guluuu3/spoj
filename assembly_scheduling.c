#include <stdio.h>
#define NUM_STATION 4
int min(int a, int b) { return a < b ? a : b; }
int carAssembly(int a[][NUM_STATION], int t[][NUM_STATION], int *e, int *x)
{
    int i;
	 int T1[NUM_STATION],T2[NUM_STATION];
	T1[0]=e[0]+a[0][0];
	T2[0]=e[1]+a[1][0];
	for(i=1;i<=4;i++)
	{
	T1[i]=min(T1[i-1]+a[0][i],T2[i-1]+t[1][i]+a[0][i]);
	T2[i]=min(T2[i-1]+a[1][i],T1[i-1]+t[0][i]+a[1][i]);
	}
	for(i=0;i<NUM_STATION;i++)
    {
        printf("%d \n \n \n",T1[i]);
        printf("%d\n",T2[i]);


    }
	return min(T1[NUM_STATION-1]+x[0],T2[NUM_STATION-1]+x[1]);
}

int main(void) {
	 int a[][NUM_STATION] = {{4, 5, 3, 2},
                {2, 10, 1, 4}};
    int t[][NUM_STATION] = {{0, 7, 4, 5},
                {0, 9, 2, 8}};
    int e[] = {10, 12}, x[] = {18, 7};

    printf("%d", carAssembly(a, t, e, x));
	// your code goes here
	return 0;
}
