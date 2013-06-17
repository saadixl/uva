#include<iostream>
using namespace std;

int cycle(unsigned long cyc){


  int count=0;
  while(1){
  count++;
 if (cyc==1)
{   break;}

if (cyc%2==1){
    cyc=3*cyc+1;
}
 else{
    cyc=cyc/2;
 }

  }
   return count;

}
int main ()
{
unsigned long i,j;

   while(cin>>i>>j){
    unsigned long x,temp,temp2=0;
if(i>j){
temp=j;
j=i;
i=temp;

}

     for(x=i; x<j+1;x++){
        if(cycle(x)>temp2){
         temp2=cycle(x);
        }
}

cout<<i<<" "<<j<<" "<<temp2<<endl;
   }
        return 0;
}