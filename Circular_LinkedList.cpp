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

void insertion(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* t=head;
    while(t->next!=head)
        t=t->next;
    t->next=n;
    n->next=head;
}

void deletion(node* &head, int pos)
{
    node* t=head;
    if(pos==1)
    {
        while(t->next!=head)
            t=t->next;
        node* del=head;
        t->next=t->next->next;
        head=head->next;
        delete del;
        return;
    }
    int c=1;
    while(c++!=pos-1)
        t=t->next;
    node* del=t->next;
    t->next=t->next->next;
    delete del;
}

void display(node* head)
{
    node* t=head;
    do
    {
        cout<<t->data<<"->";
        t=t->next;
    } while (t!=head);
    cout<<t->data<<endl;    
}

int main()
{
    node* head=NULL;
    for(int i=1;i<=10;i++)
        insertion(head,i);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}
