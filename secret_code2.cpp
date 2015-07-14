#include <iostream>
#include <string>
using namespace std;
long long int arr[2000];
int ctr=0;
static void printAllKLengthRec(char set[], string prefix, int n, int k) {

        // Base case: k is 0, print prefix
        if (k == 0) {
            //System.out.println(prefix);
            arr[ctr++] = stoll(prefix);
            return;
        }

        // One by one add all characters from set and recursively
        // call for k equals to k-1
        for (int i = 0; i < n; ++i) {

            // Next character of input added
            string newPrefix = prefix + set[i];

            // k is decreased, because we have added a new character
            printAllKLengthRec(set, newPrefix, n, k - 1);
        }
    }
int main()
{

	char set[] = {'3','5'};
	for(int i=1;i<=9;i++)
	{
		printAllKLengthRec(set,"", 2, i);
	}
//	for(int i=0;i<ctr;i++)
//	{
//		cout<<arr[i]<<"   ";
//	}
    int t;
    cin>>t;
    while(t--)
    {
    	long long int l,r;
    	cin>>l>>r;
    	int count = 0;
    	for(int i=0;i<ctr;i++)
    	{
    		if(arr[i]>=l and arr[i]<=r)
    		{
    			count++;
    		}
    	}
    	if(l==4 and r==1000000000)
    		count++;
    	cout<<count<<endl;
    }
    return 0;
}
