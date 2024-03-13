#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=100;
    istringstream str("program ");
    string line;
    getline(str>>std::ws,line);
    cout<<line<<endl;
    cout<<"Testing "<<flush<<"\na"<<"b"<<ends<<"c"<<endl;
    cout<<"Hex value : "<<hex<<n<<endl;
    cout<<"Oct value : "<<oct<<n<<endl;
    cout<<"Base 8 value : "<<setbase(8)<<n<<endl;
    cout<<"Base 16 value : "<<setbase(16)<<n<<endl;
}