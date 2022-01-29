#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    // Count Distinct Elements in every Window of size k.
    int A[]= {1,2,2,1,3,1,1,3};
    int k;
    cout<<"Enter Window Size= ";
    cin>>k;
    unordered_map<int,int>M;
    for(int i=0;i<k;i++)
        M[A[i]]++;
    cout<<"CDE= "<<M.size()<<endl;
    for(int i=k;i<8;i++)
    {
        if(M[A[i-k]]==1)
            M.erase(A[i-k]);
        else
            M[A[i-k]]--;
        M[A[i]]++;
        cout<<"CDE= "<<M.size()<<endl;
        
    }
    return 0;
}