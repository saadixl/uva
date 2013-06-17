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
#define fop freopen("acm.txt", "r", stdin)
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
bool check(string f, string s)
{
    if(s.size()<f.size())
    {
        return false;
    }
    for(int i=0; i<f.size(); i++)
    {
        if(f[i]!=s[i])
        {
             return false;
        }

    }
    return true;
}
int main()
{
  //  fop;
    int t;
    si(t);
    while(t--)
    {
        int n;
        si(n);
        string str[n+1];
        rep(i,n)
        {
            cin>>str[i];
        }
        sort(str,str+n);

        bool found = true;

        rep(i,n-1)
        {
            if(check(str[i],str[i+1]))
            {
                found = false;
                break;
            }
        }


        if(found)
        {
            printf("YES\n");
        }
        else
        {
             printf("NO\n");
        }
    }

    return 0;
}
