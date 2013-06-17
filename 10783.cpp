#include<iostream>
using namespace std;
int main(){
    int t; cin>>t; int i=1;
while(t--)
    {
      int c=0;
      int a,b,temp;
      cin>>a>>b;
      if(a>b){
      temp=a;
      a=b;
      b=temp;
      }
    for(int o=a; o<=b; o++)
    {
        if(o%2==1)
        {
    c=c+o;
        }
    }
    cout<<"Case "<<i<<": "<<c<<"\n";
i++;
    }

return 0;
}
