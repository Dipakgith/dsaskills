#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    
int rightway = maze(sr,sc+1,ec,er);
int downway = maze(sr+1,sc,ec,er);
int totalway = rightway + downway;
return totalway;
}
int main()
{
    cout<<maze(0,0,2,2);
}