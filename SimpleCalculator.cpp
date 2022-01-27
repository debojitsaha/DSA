#include<iostream>
using namespace std;
int main()
{    
    float x,y;
    cout<<"Enter num= ";
    cin>>x;
    cout<<"+, -, *, / \n";
    char c;
    cout<<"Enter choice: ";
    cin>>c;
    cout<<"Enter unum= ";
    cin>>y;
    switch (c)
    {
    case '+':
        cout<<x+y<<endl;
        break;    
    case '-':
        cout<<x-y<<endl;
        break;
    case '*':
        cout<<x*y<<endl;
        break;
    case '/':
        cout<<x/y<<endl;
        break;
    default:
        cout<<"Invalid choice"<<endl;
        break;
    }

    return 0;
}