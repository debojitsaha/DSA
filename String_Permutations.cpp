#include<iostream>
//#include <string>
//#include <algorithm>
using namespace std;

void permute(string S, int l, int r)
{
    if(l==r)
    {
        cout<<S<<" ";
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(S[l],S[i]);        
        permute(S,l+1,r);
        swap(S[l],S[i]);
    }
}

int main()
{
    string S;
    cout<<"Enter String:: ";
    cin>>S;
    permute(S,0,S.size()-1);
    return 0;
}