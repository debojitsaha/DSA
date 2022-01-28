#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int A[]= {5,4,8,6,2,9};
    int B[]= {10,5,9,7,6,1,3};
    unordered_set<int>H;
    for(int i=0;i<6;i++)
        H.insert(A[i]);
    for(int i=0;i<7;i++)
        H.insert(B[i]);
    cout<<"Union of two arrays: ";
    for(auto& i:H)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}