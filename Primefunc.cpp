#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;

}
int main()
{
    int a,b;
    cout<<"Enter two limits= ";
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}