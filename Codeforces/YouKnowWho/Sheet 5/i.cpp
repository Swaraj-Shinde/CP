#include<bits/stdc++.h>
using namespace std;

void swap_row(int n,int x,int y,int matrix[500][500])
{
    for(int i=0;i<n;i++)
    {
        swap(matrix[x-1][i],matrix[y-1][i]);
    }
}
void swap_column(int n,int x,int y,int matrix[500][500])
{
    for(int i=0;i<n;i++)
    {
        swap(matrix[i][x-1],matrix[i][y-1]);
    }
}
void print_matrix(int matrix[500][500],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int matrix[500][500];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    swap_row(n,x,y,matrix);
    swap_column(n,x,y,matrix);
    print_matrix(matrix,n);
    return 0;
}