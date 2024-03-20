#include<iostream>  
using namespace std;  
class Base  
{  
    public:  
    Base()
    {  
        cout << "\n Constructor Base class";
    }  
    virtual ~Base()
    {  
        cout << "\n Destructor Base class"; 
    }  
};  
class Derived: public Base   
{  
    public:  
    Derived()
    {  
        cout << "\n Constructor Derived class" ;
    }  
    ~Derived() 
    {
        cout << "\n Destructor Derived class";
    }         
};  
int main()  
{  
    Base *bptr = new Derived; 
    delete bptr;  
}  