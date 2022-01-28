#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int A[]= {5,8,10,6,9,3};
    int B[]= {10,9,7,6,5,4,3,1};
    unordered_set<int>H;
    for(int i=0;i<6;i++)
        H.insert(A[i]);
    for(int i=0;i<8;i++)
    {
        if(H.find(B[i])!=H.end())
            H.erase(B[i]);
        else    
            H.insert(B[i]);
    }
    cout<<"Intersected Array: ";
    for(auto& i:H)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}