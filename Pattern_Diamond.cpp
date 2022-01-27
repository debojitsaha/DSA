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
            cout<<"* ";
        for(j=2;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        int j=n;
        for(;j>i;j--)
            cout<<"  ";
        for(;j>=1;j--)
            cout<<"* ";
        for(j=2;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}