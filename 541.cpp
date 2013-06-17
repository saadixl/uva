#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#define size 100
using namespace std;


int main()
{
    int input[size][size];

    int n;


        for (int a=0;a<100;a++)
                for (int b=0;b<100;b++)
                        input[a][b]=0;


    while(cin>>n&&n!=0)
    {
       for(int i=0; i<n;i++)
       {
           for(int j=0; j<n;j++)
           {
               cin>>input[i][j];
           }
       }
       int *rowf= new int[n];
    int *colf= new int[n];
     for (int i=0;i<n;i++)
                {
                        rowf[i]=0;colf[i]=0;
                }


       for(int i=0; i<n; i++)
       {
           for(int j=0; j<n; j++)
           {
               if(input[i][j]==1)rowf[i]++;
           }
       }
        for(int i=0; i<n; i++)
       {
           for(int j=0; j<n; j++)
           {
               if(input[j][i]==1)colf[i]++;
           }
       }
        for (int i=0;i<n;i++)
                {
                        rowf[i]%=2;
                        colf[i]%=2;
                }
                int f1=0,f2=0,a,b;








     for (int i=0;i<n;i++)
                {
                        if (rowf[i]==1) {f1++;a=i;a++;}
                }
                for (int j=0;j<n;j++)
                {
                        if (colf[j]==1) {f2++;b=j;b++;}
                }
                if (f1==0 && f2==0) cout<<"OK"<<endl;
                if (f1>1 || f2>1) cout<<"Corrupt"<<endl;
                if (f1==1 && f2==1)
                {
                        cout<<"Change bit ("<<a<<","<<b<<")"<<endl;
                }


     delete []rowf;
    delete []colf;


    } // end while
    return 0;
}
