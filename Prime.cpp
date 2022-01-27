#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter integer= ";
    cin>>n;
    for (i = 2; i < n; i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        cout<<"Prime Num\n";
    else
        cout<<"Composite num\n";
    

    return 0;
}