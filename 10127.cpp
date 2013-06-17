#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int r = 0, t = 0;
        do
        {
            t = (t*10+1)%n;
            r++;
        }while(t>0);

        cout<<r<<endl;
    }
    return 0;
}
