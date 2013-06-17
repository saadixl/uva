#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f,n;
        cin>>f>>n;


        for(int r=0; r<n; r++)
         {
           for(int i=1; i<=f; i++)
           {
               for(int k=0; k<i; k++)
               {
                   cout<<i;
               }
              if(i){ cout<<endl;}
           }
           for(int x=f-1; x>0; x--)
           {
               for(int n=0; n<x; n++)
               {
                   cout<<x;
               }
              cout<<endl;

           }


         if(!(t==0 && r ==n -1 ))
         {
             cout<<endl;
         }
       }

    }
    return 0;
}
