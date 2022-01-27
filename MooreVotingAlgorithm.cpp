#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    int a[n];
    cout<<"Enter array:: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    int ans=a[0], c=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==ans)
            c++;
        else    
            c--;
        if(c==0)
        {
            ans=a[i];
            c=1;
        }
    }
    for(int i=0;i<n;i++)
        if(ans==a[i])
            c++;

    c--;
    if(c>(n>>1))
        cout<<"Majority Element= "<<ans<<endl;          //An element's frequency greater than array's half size(>n/2)
    else
        cout<<"No Majority Element"<<endl;
    return 0;
}