#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float c;
    char ch;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Enter an operator : ";
    cin>>ch;
    switch(ch)
    {
        case '+':
                c=a+b;
                break;
        case '-':
                c=b-a;
                break;
        case '*':
                c=a*b;
                break;
        case '/':
                c=b/a;
                break;
        case '%':
                c=b%a;
                break;
        default:
                cout<<"Enter Valid operator \n";
    }
    cout<<"Final value is "<<c<<endl;
}
