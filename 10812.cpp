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

int main()
{
    int t;
    si(t);
    while(t--)
    {
        int sum,dif;
        src(sum,dif);
        int a,b,ab;
        ab = (sum+dif)%2;
        a = (sum+dif)/2;
        b = (sum-dif)/2;


        if(ab==0 && a>=0 && b>=0 && sum>=0 && dif>=0)
        {
            printf("%d %d\n",a,b);
        }
        else
        {
            printf("impossible\n");
        }


    }


    return 0;
}
