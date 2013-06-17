#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=-1 && a!=0 && b!=0)
    {
        int c = 0, s = (int)sqrt(a), e = (int)sqrt(b);
        c = e - s;
        if(s*s == a)c++;
        printf("%d\n",c);
    }
    return 0;
}
