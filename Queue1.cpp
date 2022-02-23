#include<iostream>
using namespace std;

#define n 10

class queue
{
    int* arr;
    int front, back;
    public:
    queue()
    {
        arr= new int[n];
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"Queue Overflow\n";
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
            front++;
    }
    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue Undeflow\n";
            return;
        }
        front++;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue Undeflow\n";
            return -1;
        }        
        return arr[front];
    }
    bool empty()
    {
        return (front==-1 || front>back);
    }
};

int main()
{
    queue q;
    for(int i=1;i<=12;i++)
        q.push(i*5);
    cout<<q.peek()<<endl;
    for(int i=1;i<=12;i++)
        q.pop();
    cout<<q.empty()<<endl;
    
    return 0;
}