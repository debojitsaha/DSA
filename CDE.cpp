#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>H;    
    int N;
    cout<<"Enter Limit= ";
    cin>>N;
    int A[N];
    cout<<"Enter Array: ";
    for(int i=0;i<N;i++)
        cin>>A[i];
    
    for(int i=0;i<N;i++)
        H.insert(A[i]);

    cout<<"Count of Distinct Elements= "<<H.size()<<endl;
    return 0;
}