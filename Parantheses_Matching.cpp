#include<iostream>
#include<stack>
using namespace std;

bool isOpening(char c)
{
    return (c=='(' || c=='{' || c=='[');
}

bool isMatching(char a, char b)
{
    return ((a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}'));
}

bool parantheses(string s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(isOpening(s[i]))
            st.push(s[i]);
        else
        {
            if(st.empty())
                return false;
            else if(!isMatching(st.top(),s[i]))
                return false;
            else    
                st.pop();
        }
    }
    return true;
}

int main()
{
    string s;
    cout<<"Enter Parantheses: ";
    cin>>s;
    cout<<"Parantheses Matching= "<<parantheses(s)<<endl;
    return 0;
}