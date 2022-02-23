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

class queue
{
    node *front, *back;
    public:
    queue()
    {
        front=NULL;
        back=NULL;
    }
    void push(int x)
    {
        node* n= new node(x);
        if(front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop()
    {
        if(front==NULL)
        {
            cout<<"Queue Underflow\n";
            return;
        }
        node* del= front;
        front=front->next;
        delete del;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<"Queue Underflow\n";
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        return front==NULL;
    }
};

int main()
{
    queue q;
    for(int i=1;i<=10;i++)
        q.push(i*4);
    cout<<q.peek()<<endl;
    for(int i=1;i<=12;i++)
        q.pop();
    cout<<q.empty()<<endl;

    return 0;
}