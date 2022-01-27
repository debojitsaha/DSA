#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter limit= ";
    cin>>N;
    int a[N];
    cout<<"Enter Array: ";
    for(int i=0;i<N;i++)
        cin>>a[i];

    int cs=0, m=0;
    for(int i=0;i<N;i++)            //At least 1 positive number required.
    {
        cs+=a[i];
        m= max(cs,m);
        if(cs<0)
            cs=0;
    }
    cout<<"Max Subarray Sum= "<<m<<endl;    
    return 0;
}