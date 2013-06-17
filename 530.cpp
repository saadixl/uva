using namespace std;

#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
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

    #define mp make_pair
    #define pb push_back
    #define sz size()
    #define si(x) scanf("%lld",&x)
    #define int64 long long int
    #define src(x,y) scanf("%d%d",&x,&y)
    #define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
    #define fop freopen("acm.txt", "r", stdin)
    #define GI ({int _t; scanf("%d", &_t); _t;})
    #define FOR(i, a, b) for (int i=a; i<b; i++)
    #define REP(i, a) FOR(i, 0, a)
    #define pi 3.1416


int main()
{


        while(1)
        {
            int64 n , m;
            scanf("%lld%lld",&n, &m);
            if(n==0 && m==0)return 0;

            int64 k = m;
            if(m>n/2)
            {
                k = n - m;
            }
            int64 c = 1;
            for(int64 i=0; i<k; i++)
            {
                c = c *(n-i);
                c = c/(1+i);
            }


            printf("%lld\n",c);

        }




    return 0;
}


