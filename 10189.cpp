#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
char array [120][120];
    for(int x=0; x<120; x++)
    {
        for(int y=0; y<120; y++)
        {
            array[x][y]='S';
        }
    }
    int row,col; int count=0; int cases=1;
    while(cin>>row>>col)
    {

         if(row==0&&col== 0 )
            break;

      for(int i=3; i<row+3; i++)
      {
          for(int j=3; j<col+3; j++)
          {
              cin>>array[i][j];
          }
      }



   for(int i = 3; i < row+3; i++) {
            for(int j = 3; j < col+3; j++) {
                if(array[i][j] == '*')
                    continue;
                else {

                    if(array[i][j-1] == '*')
                        count++;
                    if(array[i][j+1] == '*')
                        count++;
                    if(array[i+1][j-1] == '*')
                        count++;
                    if(array[i+1][j] == '*')
                        count++;
                    if(array[i+1][j+1] == '*')
                        count++;
                    if(array[i-1][j-1] == '*')
                        count++;
                    if(array[i-1][j] == '*')
                        count++;
                    if(array[i-1][j+1] == '*')
                        count++;

           }

          array[i][j]= (int)count+48;
           count=0;
        }

    }
     if(cases!=1)
     {
        cout << endl;
     }


         printf("Field #%d:\n",cases++);

    for(int x=3; x<row+3; x++)
    {
        for(int y=3; y<col+3; y++)
        {
            cout<<array[x][y];
        }
        cout<<endl;
    }


     for(int x=0; x<120; x++)
    {
        for(int y=0; y<120; y++)
        {
            array[x][y]='S';
        }
    }



}
    return 0;
}
