#include <iostream>
using namespace std;

unsigned long long rev( unsigned long long x)
{
    if(x==0)
    {
        return 0;
    }
	unsigned long long z=0;
	while(x>0)
	{
	z *= 10;
	z += x%10;
	x /=10;
	}
	return z;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
  unsigned  long long num,count=1;
    cin>>num;
    while(num!=rev(num))
    {
        num=num+rev(num);
        if(num==rev(num))
        {
            break;
        }
        count++;
    }
    cout<<count<<" "<<num<<endl;
    }
    return 0;
}
