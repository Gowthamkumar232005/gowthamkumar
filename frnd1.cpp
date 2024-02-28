#include<iostream>
using namespace std;
class frnd1
{
    int x;
    public:
    frnd1(int a)
    {
        x=a;
    }
    friend void display(frnd1);
};
void display(frnd1 d1)
{
    cout<<d1.x<<endl;
}
int main()
{
    frnd1 d2(2);
    display(d2);
}
