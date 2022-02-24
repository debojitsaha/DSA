#include<iostream>
#include<queue>
using namespace std;

class stack
{
    queue<int> q1;
    queue<int> q2;
    public:
    void push(int x)
    {
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop()
    {
        if(q1.empty())
        {
            cout<<"Queue Underflow\n";
            return;
        }
        q1.pop();
    }
    int top()
    {
        if(q1.empty())
        {
            cout<<"Queue Underflow: ";
            return -1;
        }
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    stack st;
    for(int i=1;i<=5;i++)
        st.push(i);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    for(int i=1;i<=5;i++)
        st.pop();
    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;
    
    return 0;
}