#include<iostream>
using namespace std;
int main()
{
    int x,n,pos;
    cout<<"1. Get Bit\n 2. Set Bit\n 3. Clear Bit\n 4. Toggle Bit."<<endl;
    cout<<"Enter choice= ";
    cin>>x;
    cout<<"Enter integer= ";
    cin>>n;
    cout<<"Enter position= ";
    cin>>pos;
    switch (x)
    {
    case 1:
        cout<<(n & (1<<pos))<<endl;
        break;
    case 2:
        cout<<(n | (1<<pos))<<endl;
        break;
    case 3:
        cout<<(n & (~(1<<pos)))<<endl;
        break;
    case 4:
        cout<<(n ^ (1<<pos))<<endl;
        break;    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }

    return 0;
}