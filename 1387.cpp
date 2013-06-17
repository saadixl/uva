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
    #define si(x) scanf("%d",&x)
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
    int t,k=1;
    si(t);
    while(t--)
    {

        int n,sum=0;
        si(n);
        printf("Case %d:\n",k++);
        while(n--)
        {

            string str;
            cin>>str;
            if(str=="donate")
            {
                int tk;
                si(tk);
                sum+=tk;
            }
            else if(str=="report")
            {
                printf("%d\n",sum);
            }

        }
    }

}
