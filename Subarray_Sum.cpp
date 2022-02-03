#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int A[]= {10,15,-5,15,-10,5};
    int sum;
    cout<<"Enter Sum= ";
    cin>>sum;
    int l=0,r=-1,cs=0;
    unordered_map<int,int>M;    
    for(int i=0;i<6;i++)
    {
        cs+=A[i];
        if(cs==sum)
        {
            l=0;
            r=i;
            break;
        }
        if(M.find(cs-sum)!=M.end())
        {
            l= M[cs-sum]+1;
            r=i;
            break;
        }
        M[cs]=i;
    }
    if(r==-1)
        cout<<"Not Found!\n";
    else
        cout<<"Found! Start= "<<l<<" End= "<<r<<endl;
    return 0;
}