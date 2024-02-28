#include<iostream>
using namespace std;
class stud
{
    public:
    string name;
    int roll;
    void display1()
    {
        cout<<"Name : "<<name<<"\nRoll No. : "<<roll<<endl;
    }
};
int main()
{
    stud s;
    cout<<"Enter name : ";
    cin>>s.name;
    cout<<"Enter roll number : ";
    cin>>s.roll;
    s.display1();
}
