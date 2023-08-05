#include<iostream>
using namespace std;
int main()
{
    int m;
    int n;
    cout<<"enter no rows and columns";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
        cin>>arr[i][j];
    }
    }
     for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
        cout<<arr[j][i]<<" ";

    }
    cout<<endl;
    }

}
