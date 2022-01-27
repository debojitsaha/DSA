#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int j=1;
        for(;j<=i;j++)
        {
            if(j==1 || j==i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        for(;j<=2*n-i;j++)
            cout<<"  ";
        
        for(;j<=2*n;j++)
        {
            if(j==2*n-i+1 || j==2*n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        int j=1;
        for(;j<=i;j++)
        {
            if(j==1 || j==i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        for(;j<=2*n-i;j++)
            cout<<"  ";
        
        for(;j<=2*n;j++)
        {
            if(j==2*n-i+1 || j==2*n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}