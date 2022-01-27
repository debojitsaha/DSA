#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b==0)
        return 1;
    return (power(a,b-1)*a);
}

int main()
{
    int a,b;
    cout<<"Enter base & power= ";
    cin>>a>>b;
    cout<<"Power= "<<power(a,b)<<endl;
    return 0;
}