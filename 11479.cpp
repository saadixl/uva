#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T,cnt=1;
    long long int a[3];
    cin>>T;
    while(T--){

               cin>>a[0]>>a[1]>>a[2];
               sort(a,a+3);

               if(a[0]+a[1]<=a[2])
               cout<<"Case "<<cnt++<<":"<<" Invalid"<<endl;

               else if(a[0]==a[1] && a[0]==a[2])
               cout<<"Case "<<cnt++<<":"<<" Equilateral"<<endl;

               else if(a[0]==a[1] || a[0] == a[3] || a[1] == a[2])
                cout<<"Case "<<cnt++<<":"<<" Isosceles"<<endl;

               else if(a[0]!=a[1] && a[1]!=a[2] && a[0]!=a[2])
                cout<<"Case "<<cnt++<<":"<<" Scalene"<<endl;
                }
                return 0;
                }
