#include<iostream>
using namespace std;
class stat
{
    static int a;
    public:
    static void prin()
    {
        cout<<a<<endl;
        a+=1;
    }
};
int stat :: a;
int main()
{
    stat ob;
    for(int i=0;i<5;i++)
    ob.prin();
    return 0;
}
