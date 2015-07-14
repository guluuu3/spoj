#include <iostream>
using namespace std;

int main()
{


		int n;
		cin>>n;

		long long int dst[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>dst[i][j];
			}
		}
		int t;
	    cin>>t;
	    while(t--)
	    {
	    	int src,gas,dest;
	    	cin>>src>>gas>>dest;
	    	long long int dist[n][n];
	    	for(int i=0;i<n;i++)
		    {
			for(int j=0;j<n;j++)
			{
				dist[i][j]=dst[i][j];
			}
		    }
		    // Floyd//
	    	for(int k=0;k<n;k++)
            {
                for(int i=0;i<n;i++)
                {

                    for(int j=0;j<n;j++)
                    {
                        if(dist[i][j]>dist[i][k]+dist[k][j])
                            dist[i][j]=dist[i][k]+dist[k][j];
                    }
                }

            }
	    	long long int max_price=dist[src][gas]+dist[gas][dest];
	    	long long int min_price=dst[src][dest];
	    	cout<<max_price<<" "<<max_price-min_price<<endl;
	    }

   // cout << "Hello World!" << endl;
    return 0;
}
