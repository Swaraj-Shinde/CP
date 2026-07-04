#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int i,j,row,column,moves=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                row=i;
                column=j;
                break;
            }
        }
    }

if(row==0 || row==4)
{
 moves+=2;
}
else if(row==1 || row==3)
{
    moves+=1;
}
else
{
    moves+=0;
}

if(column==0 || column==4)
{
 moves+=2;
}
else if(column==1 || column==3)
{
    moves+=1;
}
else
{
    moves+=0;
}

cout<<moves;
    return 0;
}