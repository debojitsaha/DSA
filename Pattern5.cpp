#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"  ";
        for(int j=1;j<=n-i;j++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}