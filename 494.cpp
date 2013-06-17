#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
using namespace std;
int main()
{
    char x[100000];
    while(gets(x))
    {
        int l =strlen(x);
        int flag =0;
        int count=0;
        for(int i=0; i<l; i++)
{


            if(isalpha(x[i])&&!flag)
            {
                count++;
                flag=1;
            }
            else if(!isalpha(x[i]))
            {
                flag=0;
            }
}
        cout<<count<<endl;


    }
    return 0;
}
