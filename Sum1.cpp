#include<iostream>
using namespace std;
int main()
{
    int n,S=0;
    cout<<"Enter limit= ";
    cin>>n;
    for(int i=1;i<=n;i++)
        S+=i;
    cout<<"Sum= "<<S<<endl;

    return 0;
}