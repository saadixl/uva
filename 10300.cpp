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
#define pi(x) printf("%d\n",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
using namespace std;

int main()
{
    int t;
    si(t);
    while(t--)
    {
        int l,ar,an,fl,sum;
        si(l);
          sum=0;
        while(l--)
        {
            st(ar,an,fl);

            sum+= (ar*fl);

        }
        pi(sum);
    }
    return 0;
}
