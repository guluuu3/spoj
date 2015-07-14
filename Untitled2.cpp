#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int arr[100000];
		arr[0]=0;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
			int x;
		cin>>x;
	while(x--)
	{
		int q,x,y;
		int even=0;
		int odd=0;
		cin>>q>>x>>y;
		int ve[100000]=1;;
		int vo[100000]=1;
		if(q==0)
		{
		arr[x]=arr[y];
		if(arr[y]%2==0)
		ve[arr[y]]++;
		else
		vo[arr[y]]++;
		}
	    if(q==1)
	    {
	    	if(y%2==0)
	    	even=(y-x)/2;
	    	else
	    	even=1+(y-x)/2;
	    	for(int i=1;i<=n;i++)
	    	{
	    		if(ve[i]>0 && i==y)
	    		even=even+ve[i];

	    	}
	    	cout<<even<<endl;
	    }
	    if(q==2)
	    {
	    	if(y%2==0)
	    	even=(y-x+1)/2;
	    	else
	    	even=1+(y-x+1)/2;
	    	for(int i=1;i<=n;i++)
	    	{
	    		if(vo[i]>0 && i==y)
	    		odd=odd+vo[i];

	    	}
	    	cout<<odd<<endl;
	    }





	}
		//for(int i=0;i<=n;i++)cout<<arr[i];
    //cout << "Hello World!" << endl;
    return 0;
}
