#include<stdio.h>
#include<stdlib.h>
//using namespace std;

int main()
{

int arr[]={1,2,3,4,5};
char str1[20];
char str2[20];
int i=567;
int j=555;
    itoa(i, str1, 10);
    itoa(j, str2, 10);
    strcat(str1,str2);

printf("%s",str1);

return 0;


}
