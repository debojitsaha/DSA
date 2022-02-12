#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

class stack
{
    node* head;
    public:
    stack()
    {
        head=NULL;
    }
    void push(int x)
    {
        node* t=new node(x);
        t->next=head;
        head=t;
    }
    int pop()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow: ";
            return -1;
        }
        int x=head->data;
        head=head->next;
        return x;
    }
    int Top()
    {
        if(head==NULL)
        {
            cout<<"Stack is Empty: ";
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head==NULL;
    }
};

int main()
{
    stack st;
    for(int i=1;i<=5;i++)
        st.push(i);
    cout<<st.Top()<<endl;
    for(int i=1;i<=6;i++)
        cout<<st.pop()<<endl;
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}