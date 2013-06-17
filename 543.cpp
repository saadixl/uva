#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;
bool isPrime(int n)
{
    if(n==2) return true;
    if(n%2==0)return false;

    for(int i=3; i<(int)sqrt(n)+1; i+=2)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{

    int t;
    while(scanf("%d",&t)!=-1&&t!=-0)
    {
int f = 1;
        for(int i=2; i<=t/2; i++)
        {
            if(isPrime(i)&&isPrime(t-i))
            {
                cout<<t<<" = "<<i<<" + "<<t-i<<endl;
                f=0;
                break;

            }


        }



         if(f==1)
            {
                cout<<"Goldbach's conjecture is wrong."<<endl;
            }

    }
    return 0;
}
