#include<iostream>
using namespace std;
int main()
{
    int n,mx=0;
    cout<<"Enter no. of elements= ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        mx= max(mx,a[i]);
    }
    cout<<"\nMax element= "<<mx<<endl;

    return 0;
}