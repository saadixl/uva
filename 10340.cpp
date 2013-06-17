#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s,t;
    while(cin>>s>>t)
{


    int flag=0;
    for(int i=0; i<s.length(); i++)
    {

        for(int j=0; j<t.length(); j++)
        {
            if(s[i]==t[j])
            {
                i++;
                flag++;

            }
        }
    }

if(flag==s.length())
{
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}

}
    return 0;
}
