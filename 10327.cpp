#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a [n+1];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0;
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    int tmp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                    count++;
                }
            }

        }
         printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
