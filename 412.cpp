#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>

#include<cstdio>
#include<climits>
#include<cstdlib>
#include<cstring>
#include<cmath>

#define pb push_back
#define si(x) scanf("%d",&x)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)


using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
  //  freopen("acm.txt","r",stdin);
    int s;
    while(si(s)&&s!=0)
    {
        int ar[s+1];
        int nc=0,yc=0;
        for(int i=0; i<s; i++)
        {
            si(ar[i]);
        }
        for(int i=0; i<s; i++)
        {
            for(int j=i+1; j<s; j++)
            {
                yc++;
                if(gcd(ar[i],ar[j])==1&&i!=j)
                {
                    nc++;
                }
            }
        }
     if(nc==0)
     {
         cout<<"No estimate for this data set."<<endl;
     }


        else
        {
            double pi = sqrt( (6*(double)yc) / (double)nc   );
            printf("%.6lf\n",pi);
        }




    }
    return 0;
}
