#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
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
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int

using namespace std;


int main()
{
 // freopen("acm.txt","r",stdin);
  int t;
  si(t);
  while(t--)
  {
      int x;
      si(x);
      int ar[x+1];
      for(int i=0; i<x; i++)
      {
          si(ar[i]);
      }
      int swap=0;
      for(int a=0; a<x-1;a++)
      {
          for(int b=a+1; b<x; b++)
          {
            if(ar[a]>ar[b])
            {
                int tmp = ar[a];
                ar[a] = ar [b];
                ar[b] = tmp;
                swap++;
            }
          }
      }
      cout<<"Optimal train swapping takes "<<swap<<" swaps."<<endl;
  }


    return 0;
}
