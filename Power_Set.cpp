#include<iostream>
using namespace std;

void PowerSet(string S,int i,string cs)
{
    if(i==S.size())
    {
        cout<<cs<<" ";
        return;
    }
    PowerSet(S,i+1,cs+S[i]);
    PowerSet(S,i+1,cs);
}

int main()
{
    string S;
    cout<<"Enter String:: ";
    cin>>S;
    PowerSet(S,0,"");
    return 0;
}