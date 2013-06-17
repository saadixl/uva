
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
int main()
{
    int t;
    si(t);
    while(t--)
    {
        string s[4];
        cin>>s[0]>>s[1]>>s[2]>>s[3];
        int ar[9],sum=0,sum2=0;
        int c=4;
        for(int i=0; i<4; i++)
        {
            sum += (((int)s[i][1]-48)+((int)s[i][3]-48));
             ar[i] = ((int)s[i][0]-48)*2 ;
             ar[c] = ((int)s[i][2]-48)*2;
             c++;
        }
        rep(i,8)
        {
            int dig,dig2=0;
            if(ar[i]>9)
            {
                dig = ar[i] / 10;
                dig2 = ar[i] % 10;
            }
            else if(ar[i]<10)
            {
                dig = ar[i];
            }


            sum2+= (dig+dig2);
        }
       // cout<<sum <<" "<<sum2;
            int res = (sum+sum2)%10;
           if(res==0)
            {
                printf("Valid\n");
            }
            else
            {
                printf("Invalid\n");
            }
    }

    return 0;

}
