#include<iostream>
using namespace std;
int main()
{
    int n, s=0;
    cout<<"Enter num= ";
    cin>>n;
    for(int i=5;i<=n;i=i*5)
        s= s+(n/i);
    cout<<"Trailing 0:: "<<s<<endl;

    return 0;
}