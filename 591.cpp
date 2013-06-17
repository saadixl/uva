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
    int n,kase=0;
    while(cin>>n&& n!=0)
    {
        kase++;

        int ar[n+1],sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        int avg = sum/n,moves=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]>avg)
            {
                moves+= (ar[i] - avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",kase,moves);


    }

return 0;
}
