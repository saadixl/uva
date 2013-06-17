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
   while(1)
   {
       string str,cop;
       getline(cin,str);
       if(str=="DONE")break;
       for(int i=0; i<str.length(); i++)
       {
           str[i] = tolower(str[i]);
           if(isalpha(str[i]))
           {
               cop.pb(str[i]);
           }
       }
    string rop(cop.begin(),cop.end());
    reverse(rop.begin(),rop.end());


       if(rop==cop)
       {
           printf("You won't be eaten!\n");
       }
       else
       {
           printf("Uh oh..\n");
       }


   }

    return 0;
}
