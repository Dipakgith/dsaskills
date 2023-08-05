#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter no of rows of 1st matrix";
    cin>>m;
    int n;
    cout<<"enter no of columns of 2nd matrix";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[m][n];
        }
    }
    cout<<endl;
  for(int i=0;i<m;i++)
    {
        if(i%2==0)
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
}
else {
    for(int j=n-1;J>=0;j--)
    {
        cout<<arr[i][j]<<" ";
    }
    

}

}