#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

void reverse(stack<int>&st)
{
    if(st.empty())
        return;
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

void display(stack<int>st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main()
{
    stack<int>st;
    for(int i=1;i<=5;i++)
        st.push(i);
    cout<<"Original Stack:\n";
    display(st);
    cout<<"Reversed Stack:\n";
    reverse(st);
    display(st);
    return 0;
}