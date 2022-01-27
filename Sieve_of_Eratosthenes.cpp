#include<iostream>
using namespace std;

void primeSieve(int x,int y) // for a range of values
{
    int a[y+1]= {0};
    for(int i=x;i*i<=y;i++)
    {
        if(a[i]==0){
            for(int j=i*i;j<=y;j+=i)
                a[j]=1;            
        }
    }

    for(int i=x;i<=y;i++)
    {
        if(a[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int x,y;
    cout<<"Enter range(>1): ";
    cin>>x>>y;
    primeSieve(x,y);
    return 0;
}