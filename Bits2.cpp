#include<iostream>
using namespace std;
int main()
{
    int a,b,n,c=0;
    cout<<"Enter 2 nums= ";
    cin>>a>>b;
    n= a^b;
    while(n>0)
    {
        c++;
        n= n & (n-1);
    }
    cout<<"No. of bits required to change "<<a<<" to "<<b<<"= "<<c<<endl;

    return 0;
}