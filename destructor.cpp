#include<iostream>
using namespace std;
class dest
{
    public:
    dest()
    {
        cout<<"Constructor \n";
    }
    ~dest()
    {
        cout<<"Destructor \n";
    }
};
int main()
{
    dest obj;
    cout<<"After Destructor \n";
}
