#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int rr[8] = {1,1,-1,-1,2,-2,-2,2 };
int cc[8] = {2,-2,-2,2,1,1,-1,-1 };
int main()
{
 //freopen("acm.txt","r",stdin);
    string a,b;
    while(cin>>a>>b)
    {

       int sr = (int)a[0]-97;
       int dr = (int)b[0]-97;
       int sc = (int)a[1]-49;
       int dc = (int)b[1]-49;

       int graph[10][10];
       for(int i=0; i<=8; i++)
       {
           for(int j=0; j<8; j++)
           {
               graph[i][j]=INT_MAX;
           }
       }


    queue< pair< int,int > >q;
    q.push(make_pair(sr,sc));
    graph[sr][sc]=0;
    while(!q.empty())
    {

        pair<int,int>temp;
        temp = q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int tr = temp.first+rr[i];
            int tc = temp.second+cc[i];
             if( tr<0 || tr>=8 || tc<0 || tc>=8)
            {
                continue;
            }
            int newcost = graph[temp.first][temp.second]+1;
            if(newcost<graph[tr][tc])
            {
                graph[tr][tc]=newcost;
                q.push(make_pair(tr,tc));
            }

        }
    }




cout<<"To get from "<<a<<" to "<<b<<" takes "<<graph[dr][dc]<<" knight moves."<<endl;



    }


    return 0;
}
