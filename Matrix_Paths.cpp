#include<iostream>
using namespace std;

int matrix(int n, int m)
{
    if(n==1 || m==1)
        return 1;
    return matrix(n-1,m)+matrix(n,m-1);
}
int main()
{
    int n,m;
    cout<<"Enter rows & columns= ";
    cin>>n>>m;
    cout<<"No. of ways to reach from start to end= "<<matrix(n,m)<<endl;
    return 0;
}