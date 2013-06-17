using namespace std;

///___________________________________________________///
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
///___________________________________________________///
///___________________________________________________///
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
    template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}
    int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
    #define DBG(x) cout << #x << "::" << x << endl;
    #define DBGV(_v) { REP(_i, _v.size()) { cout << _v[_i] << "\t";} cout << endl;}


///___________________________________________________///


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF && n>0)
    {
        int ar[n+1];
        REP(i,n)
        {
            ar[i]=GI;
            if(i!=0)
            {
               if(ar[i]>ar[i-1])
               {
                   int t = ar[i];
                   ar[i] = ar[i-1];
                   ar[i-1]=t;
               }
            }
        }
       sort(ar,ar+n);
        REP(i,n)
        {
            printf("%d",ar[i]);
            if(i!=n-1)printf(" ");

        }
        printf("\n");
    }

    return 0;
}
