#include<iostream>
using namespace std;
int factorial(int n)
{
    int p=1;
    for(int i=2;i<=n;i++)
        p*=i;
    return p;
}
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    //Pascal's Triangle is about factorial of (Row!/(Cell!*(Row-Cell)!)) where index starts with 0.
    for(int i=0;i<n;i++)
    {
        for(int j=n-i;j>=1;j--)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}