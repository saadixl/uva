using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
int main()
{
    int temp,S[2];
    string str;
    while(getline(cin,str))
    {
        if(str=="0") break;
        S[0]=0,S[1]=0;
        for(int i=0,j=0;j<str.length();j++,i=(i+1)%2)
        {
            S[i]+=(str[j]-'0');
        }
        if((S[0]-S[1])%11)
        cout<<str<<" is not a multiple of 11.\n";
        else
        cout<<str<<" is a multiple of 11.\n";
    }
}
