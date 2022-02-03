#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>H;
    for(int i=1;i<=10;i++)
        H.insert(i);
    for(auto& i:H)
        cout<<i<<" ";
    cout<<endl;
    if(H.find(55)==H.end())
        cout<<"Not Found\n";
    else    
        cout<<"Element Found\n";
    cout<<H.size()<<endl;
    cout<<H.count(10)<<endl;
    H.erase(10);
    cout<<H.count(10)<<endl;
    cout<<H.size()<<endl;
    H.clear();
    cout<<H.size()<<endl;
    return 0;
}