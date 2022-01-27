#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0,t;
    cout<<"Enter num= ";
    cin>>n;
    t=n;
    while(n>0)
    {
        r= n%10;
        s= s*10 + r;
        n/=10;
    }
    if(t==s)
        cout<<"Palindrome\n";
    else
        cout<<"Non Palindrome\n";

    return 0;
}