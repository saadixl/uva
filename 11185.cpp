#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int dec;
    while(cin>>dec&&dec>=0)
    {
        if(dec==0)
        cout<<"0";
        else
        int bal; int x[1000]; int i=0;
          while(dec>0)
        {
        x[i]=dec%3;
        dec=dec/3;
        i++;

        }
        for(int ii=i-1; ii>=0; ii--)
        {
            cout<<x[ii];
        }
    cout<<endl;

    }
    return 0;
}
