#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string>st;
    int n= s.size();
    for(int i=0;i<n;i++)
    {
        string word="";
        while(s[i]!=' ' && i<n)
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s;
    cout<<"Enter String:: ";
    getline(cin,s);
    cout<<s<<endl;
    reverseSentence(s);
    return 0;
}