#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<vector>

 using namespace std;
long long int gcd( long long int a, long long int b )
{
    if( !b ) return a;
    return gcd( b, a%b );
}
long long int lcm(long long int a, long long int b)
{
    long long int c;
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    return (a*b)/gcd(a,b);
}


 int main()
 {
  // freopen("acm.txt","r",stdin);
    int t,cases=0;
    scanf("%d",&t);

    while(t--)
    {
       long long int n;
       cases++;
       scanf("%lld",&n);
       vector<long long int>v;
        long long int tl=1,flcm,sum=0;
       for(int i=0; i<n;i++)
       {
           long long int tmp;
            scanf("%lld",&tmp);
           v.push_back(tmp);
            flcm = lcm(tl,v[i]);
            tl = flcm;
       }


       for(int i=0; i<n; i++)
       {
           sum+= (flcm/v[i]);
       }


       long long int lb = (n*flcm);

       while(gcd(lb,sum)!=1)
       {
            long long int g = gcd (lb,sum);
            lb/=g;
            sum/=g;
       }




            printf("Case %d: %lld/%lld\n",cases,lb,sum);





    }

     return 0;
 }
