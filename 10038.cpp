#include<iostream>
using namespace std;
int main()
{
    int t;

    int array[3001];
    bool b[3001];
    int d,y;
    while(cin>>t)
    {
    y=1;

    for(int i=0; i<t; i++)
    {
        cin>>array[i];
        b[i]=false;
    }
    if(t==1)
    {
        cout<<"Jolly"<<endl;
        continue;
    }
    for(int x=0; x<t-1; x++)
    {
        d=array[x]-array[x+1];
        if(d<0)
        {
            d*=-1;
        }
        if(!d||d>=t||b[d])
        {
            y=0;
            break;
        }
        b[d]=true;
    }
    if(y)
    {
        cout<<"Jolly"<<endl;
    }
    else
    {
        cout<<"Not jolly"<<endl;
    }

}
    return 0;
}
