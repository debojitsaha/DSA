#include<iostream>
using namespace std;
#define n 100
class stack
{    
    int *a, top;    
    public:
    stack()
    {        
        a= new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        a[top]=x;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow: ";
            return -1;
        }
        int x= a[top];
        top--;
        return x;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty: ";
            return -1;
        }
        return a[top];
    }
    bool empty()
    {
        return top==-1;
    }
};

int main()
{
    stack st;
    for(int i=1;i<=100;i++)
        st.push(i);
    cout<<st.Top()<<endl;
    for(int i=1;i<=100;i++)
        st.pop();
    cout<<st.pop()<<endl;
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}