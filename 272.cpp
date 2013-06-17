#include<stdio.h>
#include<string.h>

int main()
{
char st[1000000];
long int l,i,count=0;

while(gets(st))
{

l=strlen(st);
for(i=0;i<l;i++)
{
if(st[i]=='"')
{
count++;
if(count%2==0)
printf("''");
else
printf("``");
}
else
printf("%c",st[i]);
}

printf("\n");
}
return 0;

}
