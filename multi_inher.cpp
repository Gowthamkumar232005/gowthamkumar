#include<iostream>
using namespace std;
class A 
{
    public:
    void msg()
    {
        cout<<"Hello"<<endl;
    }
};
class B
{
    public:
    A obj;
    void msg()
    {
        obj.msg();
        cout<<"World";
    }
};
int main()
{
    B ob;
    ob.msg();
}