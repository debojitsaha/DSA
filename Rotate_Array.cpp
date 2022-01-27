#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,d;
    cout<<"Enter no. of elements & rotation element= ";
    cin>>n>>d;
    int a[n];           //Rotating the array by d elements towards left;
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}