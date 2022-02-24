#include<iostream>
#include<stack>
using namespace std;

class queue
{
    stack <int>st1;
    stack <int>st2;
    public:
    void push(int x)
    {
        st1.push(x);
    }
    void pop()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Queue Underflow\n";
            return;
        }
        if(st2.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        st2.pop();
    }
    int peek()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Queue Underflow: ";
            return -1;
        }if(st2.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    bool empty()
    {
        return st1.empty() && st2.empty();
    }
};

int main()
{
    queue q;
    for(int i=1;i<=5;i++)
        q.push(i);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.push(6);
    for(int i=1;i<=6;i++)
        q.pop();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;

    return 0;
}