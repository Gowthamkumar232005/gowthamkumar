#include<iostream>
using namespace std;
int main()
{
    int arr[5],n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
