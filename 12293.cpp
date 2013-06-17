#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include<climits>
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
#define si(x) scanf("%d",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
using namespace std;
int main()
{
    int n;
    while(si(n)&&n!=0)
    {
        int res=1;
        while(res<n)
        {
            res*=2;
            res++;
        }
        if(res==n)
        {
            cout<<"Bob"<<endl;

        }
        else
        {
             cout<<"Alice"<<endl;
        }
    }
}
