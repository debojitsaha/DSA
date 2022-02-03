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
    int c=0;
    for(int i=0;i<8;i++)
    {
        if(H.find(B[i])!=H.end())
        {
            c++;
            H.erase(B[i]);
        }        
    }
    cout<<"Distinct Array Elements: "<<c<<endl;
    return 0;
}