#include<iostream>
using namespace std;
class Hello
{
    public:
    int roll;
    string name;
    public:
    Hello()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no. : ";
        cin>>roll;
    }

};
int main()
{
    Hello h;
    cout<<h.name<<endl<<h.roll<<endl;
}
