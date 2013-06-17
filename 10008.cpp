#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char text[10000],ch;
long count[130];

int main()
{
   long t,i,f,ii,j,min,len,letter,k;

   while(cin>>t){
   for(i=0;i<t+1;i++)
   {

      gets(text);
      len=strlen(text);
      for(ii=0;ii<len;ii++)
      {
         if((text[ii]>=65 && text[ii]<=90) || (text[ii]>=97 && text[ii]<=122))
         {
            if(text[ii]>=97 && text[ii]<=122)
            {
               count[text[ii]-32]++;
               continue;
            }
            count[text[ii]]++;
         }
      }
   }

   f=0;
   for(k=1;k<=26;k++)
   {
      min=0;
      for(j=65;j<=90;j++)
      {
         if(count[j]>min)
         {
            min=count[j];
            letter=j;
         }
      }
      if(min==0)
         continue;
      if(f==1 && min>0)
      {
         printf("\n");
      }
      f=1;
      count[letter]=-1;
      printf("%c %ld",letter,min);
   }
   cout<<endl;
}
   return 0;
}
