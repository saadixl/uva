
#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    int g;
    cin>>g;
    while(g)
    {
        cin>>str;
        int f=str.length()/g;
        int x=f,y=0,i=0;
        for(int j=f-1; j<str.length(); j+=f)
        {
            for(i=j; i>=y; i--)
            {
                cout<<str[i];


            }
            y+=f;
        }
        cout<<endl;
        cin>>g;
    }
    return 0;
}
