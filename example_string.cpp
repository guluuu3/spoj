#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{

int t;
cout<<"enter the number of inputs:";
cin>>t;
while(t--)
{
    char str[100];
    int c=0;
    int arr[100];
    int k=1;
    arr[0]=0;
    fgets(str,100,stdin);//scanf ("%[^\n]%*c", str);//both of them can be used



          for(int i=0;i<strlen(str);i++)
		{
			if(str[i]==' ')
			{

				//cout<<i<<endl;
				c++;
				arr[k++]=i+1;//stores the next element of after the space
                //k++;//counts the total numbe of spces
			}
		}
		//cout<<c<<endl;//counts one less than the total number of space//equals to k-1//even k-1 can be used
		for(int i=0;i<k-1;i++)
        {

            cout<<str[arr[i]]<< ".";
        }

         int x=arr[k-1]-1;//points to the character  next to the last space
         char m[62];
         m=*(str+x);
         cout<<m;
        cout<<str+x;
        //printf("%s",str+x);//prints the last string till the end

}//while ends
 cout<<endl;

return 0;


}
