#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
int n, k, sum, x;
while(scanf("%d%d",&n,&k)==2)
{
sum = n, x = n;
while(x >= k)
sum += (x / k), x = (x / k) + (x % k);
cout<<sum<<endl;
}
return 0;
}
