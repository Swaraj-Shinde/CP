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

moves=abs(2-row)+abs(2-column); //distance formula
cout<<moves;
return 0;
}