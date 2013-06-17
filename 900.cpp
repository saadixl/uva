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
#define si(x) scanf("%lld",&x)
#define st(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define src(x,y) scanf("%d%d",&x,&y)
#define pi(x) printf("%d",x)
#define sc(c) scanf("%s",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110

using namespace std;
int64 fib [] = { 1 , 1  , 2  , 3 ,  5  , 8 ,  13  , 21 ,  34 ,  55 ,  89  , 144 ,  233  , 377 ,  610  , 987  , 1597 ,  2584 ,  4181  , 6765  , 10946 ,  17711  , 28657  , 46368  , 75025 ,  121393  , 196418  , 317811 ,  514229  , 832040  , 1346269  , 2178309 ,  3524578 ,  5702887 ,  9227465  , 14930352 ,  24157817  , 39088169 ,  63245986  , 102334155  , 165580141   ,267914296  , 433494437 ,  701408733 ,  1134903170  , 1836311903  , 2971215073  , 4807526976 ,  7778742049  ,12586269025,20365011074};
int main()
{
    int64 n;
    while( si(n) && n!=0)
    {
       printf("%lld\n",fib[n]);
    }

    return 0;
}
