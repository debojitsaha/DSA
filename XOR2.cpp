#include<iostream>
using namespace std;
int main()
{
    int n, s=0, x=0;
    cout<<"Enter limit= ";
    cin>>n;
    int a[n];
    cout<<"Enter Array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s^=a[i];
    }
    int set= s & ~(s-1);
    for(int i=0;i<n;i++)
    {
        if(set & a[i])
            x^=a[i];
    }
    s^=x;
    cout<<"Two Unique Elements= "<<s<<", "<<x<<endl;

    return 0;
}