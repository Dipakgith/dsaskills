#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"no of rows";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout << (char)('A'+j-1) << " ";

        }
        cout<<endl;
    }
}
