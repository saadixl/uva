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
#define si(x) scanf("%d",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
using namespace std;
long tnp(long a,long l)
{
    long c=0;
    while(a<=l&& a!=1)
    {
        if(a%2==1)
        {
           a=3*a+1;
        }

        else
            a/=2;
            c++;
    }
    if(a==1)c++;
    return c;
}
int main()
{
long kase=1,c,a,l;
// freopen("acm.txt","r",stdin);

while(scanf("%ld%ld",&a,&l)==2 && a>0 && l>0)
{
    c = tnp(a,l);

    printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",kase++,a,l,c);

}
return(0);
}
