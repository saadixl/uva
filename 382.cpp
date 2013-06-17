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
#include <valarray>
#include <iostream>
#include <algorithm>
#define LLU long long unsigned int

using namespace std;
int main()
{
    int n;
    cout<<"PERFECTION OUTPUT\n";
    bool ab;
    while(cin>>n)
    {
        if(!n) break;
        ab=false;
        LLU sum=0;
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(sum>n)
                {
                    ab=true;
                    break;
                }
            }
        }
        if(ab)
        printf("%5d  ABUNDANT\n",n);
        else if(sum==n)
        printf("%5d  PERFECT\n",n);
        else
        printf("%5d  DEFICIENT\n",n);
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}
