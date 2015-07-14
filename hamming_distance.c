#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int countHammDist(unsigned int n, unsigned int m)
{
int i=0;
unsigned int coun = 0 ;
for(i=0; i<8; i++){
if( (n&1) != (m&1 )) {
    coun++;
    }
n >>= 1;
m >>= 1;

}
return coun;
}
int main()
{

   int t;


}
