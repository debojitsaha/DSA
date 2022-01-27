#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int j=n,k;
        for(;j>i;j--)
            cout<<"  ";
        k=j;
        for(;j>=1;j--)
        {   
            if(j==k)
                cout<<"* ";
            else
                cout<<"  ";
        }        
        for(j=2;j<=i;j++)
        {
            if(j==i)    
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--)
    {
        int j=n,k;
        for(;j>i;j--)
            cout<<"  ";
        k=j;
        for(;j>=1;j--)
        {   
            if(j==k)
                cout<<"* ";
            else
                cout<<"  ";
        }        
        for(j=2;j<=i;j++)
        {
            if(j==i)    
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}