#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int c;
 long long  unsigned int a;
    while(cin>>c)
    {
        if(c<0)break;
       a=1;
        for(long long unsigned int i=1; i<=c;i++)
        {
            a+=i;
        }
        cout<<a<<endl;
    }

    return 0;
}
