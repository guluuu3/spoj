#include <iostream>
#include <cmath>
#include <cerrno>
#include <cstring>
#include <cfenv>
int main()
{
int n=100;
int k=10;
std::cout<<double exp( std::lgamma(n+1)-std::lgamma(k+1)-std::lgamma(n-k+1));

return 0;

}
