#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <climits>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>
#define pb push_back
#define mp make_pair
#define si(x) scanf("%lld",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%lld%lld",&x,&y)
#define pi(x) printf("%lld\n",x)
#define sc(c) scanf("%s",&c)
#define pt(a,b) printf("%lld %lld\n",a,b)
#define int64 long long int
#define maxn 110
using namespace std;
int64 gcd(int64 a, int64 b)
{
    if(b==0)return a;

    else
    return gcd(b,a%b);
}


int main()
{
    int64 t;
    si(t);
    while(t--)
    {
        int64 g,l,G,L;
        src(g,l);
        G = gcd(g,l);
        L = (g*l)/G;

        if(G==g && L==l)
        {
            pt(G,L);
        }
        else
        {
            printf("%d\n",-1);
        }



    }


    return 0;

    }
