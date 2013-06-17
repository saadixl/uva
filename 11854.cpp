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
#define sl(x) scanf("%lld",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
using namespace std;
int main()
{
    int n;
    si(n);
    while(n--)
    {
       int x; int64 ans;
       si(x);
       ans = (((((x*567)/9)+7492)*235)/47)-498;
       if(ans<0)
       {
           ans*=-1;
       }

        int s = (ans%100)/10;
        printf("%d\n",s);

    }
}
