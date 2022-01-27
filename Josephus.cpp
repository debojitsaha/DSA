#include<iostream>
using namespace std;

int jos(int n, int k)
{
    if(n==1)
        return 0;
    return ((jos(n-1,k)+k)%n);
}

int main()
{
    int n,k;
    cout<<"Enter no. of persons= ";
    cin>>n;
    cout<<"Enter elimination point= ";
    cin>>k;
    cout<<"Index of Winner Person= "<<jos(n,k)<<endl;
    return 0;
}