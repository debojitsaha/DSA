#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter sides of triangle= ";
    cin>>a>>b>>c;
    
    if(a==b && b==c)
        cout<<"Equilateral Triangle\n";
    else if((a==b && a!=c) || (b==c && b!=a) || (c==a && c!=b))
        cout<<"Isosceles Triangle\n";
    else
        cout<<"Scalene Triangle\n";

    return 0;
}