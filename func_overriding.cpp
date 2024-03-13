#include<iostream>
using namespace std;
class pare
{
    public:
    int a=129;
    void print()
    {
        cout<<"Hello"<<endl;
    }
};
class child : public pare
{
    public:
    void print()
    {
        cout<<"World "<<a<<endl;
    }
};
int main()
{
    child obj;
    obj.print();
    pare ob;
    ob.print();
}