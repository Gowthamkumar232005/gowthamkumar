#include<iostream>
using namespace std;
class inlinee
{
    int n;
    public:
    inlinee()
    {
        cout<<"Enter value : ";
        cin>>n;
    }
    void display();
};
inline void inlinee::display()
{
    cout<<n<<endl;
}
int main()
{
    inlinee ob;
    cout<<"Content : ";
    ob.display();
}
