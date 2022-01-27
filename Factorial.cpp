#include<iostream>
using namespace std;
int main()
{
    long n,p=1;
    cout<<"Enter an integer= ";
    cin>>n;
    for(int i=1;i<=n;i++)
        p*=i;
    cout<<"Factorial= "<<p<<endl;

    return 0;
}