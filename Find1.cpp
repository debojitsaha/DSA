#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    int max= a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
            max= a[i];
    }
    max++;
    //cout<<"Max= "<<max<<endl;
    bool check[max];
    for (int i = 0; i < max; i++)
    {
        check[i]=false;
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
            check[a[i]]=true;        
    }
    
    for(int i=1;i<max;i++)
    {
        if(check[i]==false)
        {
            cout<<"Missing Num= "<<i<<endl;
            break;
        }
    }
    

    return 0;
}