#include<iostream>
using namespace std;
class Hel
{
    public:
    virtual void dis()
    {
        cout<<"Hello"<<endl;
    }
};
class virt : public Hel
{
    public:
    void dis()
    {
        cout<<"World"<<endl;
    }
};
int main()
{
    Hel *a;
    virt b;
    a=&b;
    a->dis();
}