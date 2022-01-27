#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Limit= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
            cout<<" ";
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==1 || i==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}