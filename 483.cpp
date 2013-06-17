#include <string.h>
#include <iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;
int main(void)
{
  string s; char x ;

  while(cin>>s)
  {


        x=getchar();
      reverse(s.begin(),s.end());
      cout<<s;
      putchar(x);
    }






  return 0;
}
