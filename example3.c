#include <iostream>
using namespace std;

long long int a[10000][10000] = {0};

long long int fun(int x, int y)
{
	if(a[x][y])
		return a[x][y];
	else if (x == 0) {
		return a[x][y] = (y+1)%1000;
	} else if (x > 0 && y == 0)
		return a[x][y] = fun(x - 1, 1)%1000;
	else if (x > 0 && y > 0)
		return a[x][y] = fun(x - 1, fun(x, y - 1))%1000;
}

int main()
{
    int x, y, a[10];
    cin >> x >> y;
	long long int r = fun(x, y);
	cout << r << endl;

	a[0]=r%10;
	r=r/10;
	a[1]=r%10;
	r=r/10;
	a[2]=r%10;
	cout<<a[2]<<a[1]<<a[0];

	return 0;
}
