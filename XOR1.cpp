#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cout<<"Enter limit= ";
    cin>>n;
    int a[n];
    cout<<"Enter Array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s^=a[i];
    }
    cout<<"Unique element= "<<s<<endl;  

    return 0;
}