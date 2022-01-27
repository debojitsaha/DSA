#include<iostream>
using namespace std;
int main()
{
    int t,n,r,s=0;
    cout<<"Enter an integer= ";
    cin>>n;
    t=n;
    while(n>0)
    {
        r= n%10;
        s+=r*r*r;
        n/=10;
    }
    if(t==s)
        cout<<"Armstrong Number\n";
    else
        cout<<"Non-Armstrong Number\n";

    return 0;
}