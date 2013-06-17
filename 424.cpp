#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    string num;
     int sum [1000],size=0;
     for(int i=0 ; i<500; i++)
     {
         sum[i]=0;
     }

    while(cin>>num&&num!="0")
    {
        int x=0;
        for(int i=num.length()-1;i>=0; i--)
        {

            int temp = (num[i] - 48)+sum[x];
            if(temp>9)
            {
                sum[x]=temp%10;
                x++;
                sum[x] +=temp/10;
            }
            else
            {
             sum[x] = temp;
             x++;
            }

        }

    } int l;
    for(int i =0; i<500; i++ )
    {
        if(sum[i]!=0)
        {
           l =i;
        }
    }

    for(int i = l; i>=0; i--)
    {
        cout<<sum[i];
    }



cout<<endl;
    return 0;
}
