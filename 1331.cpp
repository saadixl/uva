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
    double sq(double n)
    {
        return n*n;
    }
    int main()
    {
        int t,k=1;

        si(t);
        while(t--)
        {
            double r1 , r2 , r3;
            cin>>r1>>r2>>r3;
            double a = r1+r2;
            double b = r2+r3;
            double c = r3+r1;
            double A,B,C;

            C = acos( (sq(a)+sq(b)-sq(c) ) / 2*a*b );
            B = acos( (sq(a)+sq(c)-sq(b) ) / 2*a*c );
            A = acos( (sq(b)+sq(c)-sq(a) ) / 2*b*c );

               // cout<<A<<" "<<B<<" "<<C<<endl;

            double hp = (a+b+c)/2;

            double area = sqrt(hp*(hp-a)*(hp-b)*(hp-c));

            double ans = area - (area*(A/360) + area*(B/360) + area*(c/360)) ;

            printf("Case %d: ",k++);
            cout<<ans<<endl;

        }

        return 0;
    }
