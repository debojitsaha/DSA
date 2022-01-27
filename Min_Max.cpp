#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 nums= ";
    cin>>a>>b>>c;

    if(a>b && a>c)
        cout<<"Max= "<<a<<endl;
    else if(b>a && b>c)
        cout<<"Max= "<<b<<endl;
    else
        cout<<"Max= "<<c<<endl;

    if(a<b && a<c)
        cout<<"Min= "<<a<<endl;
    else if(b<a && b<c)
        cout<<"Min= "<<b<<endl;
    else
        cout<<"Min= "<<c<<endl;

    return 0;
}