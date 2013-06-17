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

#define int64 long long int

using namespace std;


int main()
{

int64 m,n;
while(cin>>n>>m&&n!=0&&m!=0)
{
    int64 c=1,k=m;
    if(m>n/2)
    {
        k = n - m;
    }
    for(int64 i=0; i<k; i++)
    {
        c = c *(n-i);
        c = c/(1+i);
    }


cout<<n<<" things taken "<<m<<" at a time is "<<c<<" exactly."<<endl;




}


    return 0;
}
