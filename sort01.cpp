#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void sort01(vector<int> &v){
    int n=v.size();
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0){
            noz++;
        }
        else
        noo++;
    }
    for (int i=0;i<n;i++)
    {
        if(i=noz)
        v[i]=0;
        else
        v[i]=1;
    }

}

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(-8);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(-9);
    v.push_back(7);
    v.push_back(8);
sort01(v);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

   
}