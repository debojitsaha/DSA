#include<iostream>
using namespace std;

string isPalindrome(string S, int l, int r)
{
    if(l>=r)
        return "Yes";
    if(S[l]!=S[r])
        return "No";
    return isPalindrome(S,l+1,r-1);
}

int main()
{
    string S;
    cout<<"Enter a string:: ";
    cin>>S;
    cout<<"Palindrome String:: "<<isPalindrome(S,0,S.size()-1)<<endl;
    return 0;
}