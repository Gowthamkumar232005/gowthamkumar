#include<iostream>
using namespace std;
class over
{
public:
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
double add(double n,double m)
{
    return n+m;
}
};
int main()
{
    over obj;
    int a,b;
    cout<<"Enter two values : ";
    cin>>a>>b;
    cout<<obj.add(a,b)<<endl<<obj.add(1.23f,2.32f)<<endl;
    cout<<obj.add(2.31,3.14)<<endl;
}
