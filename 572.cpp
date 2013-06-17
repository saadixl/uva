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
#define sc(c) scanf("%c",&c)
#define pc(c) printf("%s",c)
#define int64 long long int
#define maxn 110
#define fop freopen("acm.txt", "r", stdin)

using namespace std;
char grid[105][105];
int row,col;
void search(int i, int j)
{
    if(i<0 || i>=row || j<0 || j>=col || grid[i][j]=='*')
    {
        return;
    }
    grid[i][j]='*';
    search(i,j+1);
    search(i,j-1);
    search(i+1,j);
    search(i+1,j+1);
    search(i+1,j-1);
    search(i-1,j);
    search(i-1,j+1);
    search(i-1,j-1);
}

int main()
{

  //  fop;

    while(src(row,col)&& row>0 && col>0)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                cin>>grid[i][j];
            }
        }
        int count=0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(grid[i][j]=='@')
                {
                    count++;
                    search(i,j);
                }
            }
        }
            pi(count);

    }

    return 0;

}
