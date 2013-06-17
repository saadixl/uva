#include<iostream>

using namespace std;
 int rec(long long int b, long long int p, long long int m) {

  	if (p==0) { return (1%m); }
  	else if (p==1) { return (b%m); }
  	else if (p%2==0) { return (rec((b%m*b%m)%m, p/2, m)); }
  	else { return (b*rec(b, p-1, m))%m; }
  }
  int main()
  {
      long long int b , p , m;
      while(cin>>b>>p>>m)
      {
          int md = rec(b,p,m);
          cout<<md<<endl;
      }
      return 0;
  }
