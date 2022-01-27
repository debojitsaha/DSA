#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of days= ";
    cin>>N;
    int a[N];
    cout<<"Enter stock prices: ";
    for(int i=0;i<N;i++)
        cin>>a[i];
    
    int profit=0;
    for(int i=1;i<N;i++)
        if(a[i]>a[i-1])
            profit+=a[i]-a[i-1];
    cout<<"Maximum Profit= "<<profit<<endl;             //As many transactions possible.
    return 0;
}