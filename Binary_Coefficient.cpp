#include<iostream>
using namespace std;
int factorial(int n)
{
    int p=1;
    for(int i=2;i<=n;i++)
        p*=i;
    return p;
}
int main()
{
    int n,r;
    cout<<"Enter total nums= ";
    cin>>n;
    cout<<"Enter nums to be taken from total= ";
    cin>>r;
    int x= factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"Binary Coefficient= "<<x<<endl;
    return 0;
}