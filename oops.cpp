#include<iostream>
using namespace std;
class bike{
    public:
    int tyresize;
    int enginesize;
    bike(int tyresize)
    {
        this->tyresize=tyresize;
        cout<<"constructor call hua";

    }
};
int main()
{
    bike tvs(tyresize:12);
    bike honda(tyresize:25);
    cout<<tvs.tyresize<<endl;
}