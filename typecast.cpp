#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter Floating point : ";
    float n;
    cin>>n;
    int m=n*2;
    cout<<"implicit : "<<m<<endl;
    cout<<"Explicit : "<<(double)m+1.2<<endl;
}
