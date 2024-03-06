#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    cout<<"Enter number of args : "<<argc<<endl;
    for(int i=1;i<argc;i++)
    {
        cout<<"arg "<<i<<" : "<<argv[i]<<endl;
    }
}