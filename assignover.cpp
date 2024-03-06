#include<iostream>
using namespace std;
class value
{
    private:
    int real,img;
    public:
    value(int r,int i)
    {
        real=r;
        img=i;
    }
void operator=(const value & C)
{
    real=C.real;
    img=C.img;
}
void print()
{
    cout<<real<<" "<<img<<endl;
}
};
int main()
{
    value c1(2,3),c2(3,4);
    cout<<"Before overloading : ";
    c1.print();
    c2.print();
    c1=c2;
    cout<<"After overloading : ";
    c1.print();
    c2.print();
}