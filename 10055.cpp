#include<iostream>
using namespace std;
int main(){
 long long unsigned i, j;
    long long unsigned diff;


    while(cin>>i>>j)
    {


        if(i>j)
        {
            diff=i-j;
        }
        else
        {
            diff=j-i;
        }

        cout<<diff<<endl;

    }

return 0;
}
