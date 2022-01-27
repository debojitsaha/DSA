#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j=n;
        for(;j>i;j--)
            cout<<"  ";
        for(;j>=1;j--)
            cout<<j<<" ";
        for(j=2;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}