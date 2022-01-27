#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout<<"Enter an integer= ";
    cin>>n;
    while (n>0)
    {
        r=n%10;
        s= s*10+r;
        n/=10;
    }
    cout<<"Reversed Number= "<<s<<endl; 

    return 0;
}