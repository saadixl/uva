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
bool prime[1000000] = {false};
void sieve()
{
    prime[0] = true;
    prime[1] = true;
    int size = 1000000;
    for(int i=2; i<size; i++)
    {
        if(!prime[i])
        {
            for(int j=2; i*j<size; j++)
            {
                prime[i*j] = true;
            }
        }
    }
}
int main()
{
    sieve();
    int n;
    while(cin>>n&& n!=0)
    {
        int count=0;
        for(int i=n; i>=n/2; i--)
        {
            if(!prime[i] && !prime[n-i])
            {
                count++;
            }
        }
        pi(count);


    }

    return 0;
}
