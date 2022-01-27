#include<iostream>
using namespace std;
int main()
{
    // Trailing zeros of a factorial of a number
    int n,s=0,j=1,p=1;
    cout<<"Enter no.= ";
    cin>>n;
    for(int i=2;i<=n;i++)
        p*=i;
    for(int i=5;i<=n;i*=5)     
        s+=(n/i);
    cout<<"Factorial= "<<p<<endl;
    cout<<"Traling Zeros= "<<s<<endl;
}