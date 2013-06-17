#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ int cases=0;
    int t;
    while(cin>>t)
    {
        while(t--)
        {
        int size;
        cin>>size;
        int a[size];  int b=0,s=0,ans=0;
        for(int i=0; i<size; i++)
        {
            cin>>a[i];
        }


        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
            {
                if(a[j]>a[i])
                {
                    b++;
                }
             else if(a[i]>a[j])
                {
                    s++;
                }
            }
            if(s==b)
            {
               ans=a[i];
            }

                s=0;
                b=0;

        }
        cases++;
        printf("Case %d: %d\n",cases,ans);



        for(int i=0; i<size;i++)
        {
            a[i]=0;
        }
    }
    cases=0;

    }
    return 0;
}
