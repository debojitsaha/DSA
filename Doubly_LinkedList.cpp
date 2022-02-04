#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertHead(node* &head, int val)
{
    node* t= new node(val);
    t->next=head;
    if(head!=NULL)
        head->prev=t;
    head=t;
}

void insertTail(node* &head, int val)
{
    if(head==NULL)
    {
        insertHead(head,val);
        return;
    }
    node* t=head;
    while(t->next!=NULL)
        t=t->next;
    node* n=new node(val);
    t->next=n;
    n->prev=t;
}

void deletion(node* &head,int pos)
{
    if(pos==1)
    {
        node* todel= head;
        head=head->next;
        head->prev=NULL;
        delete todel;
        return;
    }
    node* t=head;
    int c=1;
    while(t->next!=NULL && c!=pos)
    {
        t=t->next;
        c++;
    }
    t->prev->next=t->next;
    if(t->next!=NULL)
        t->next->prev=t->prev;
    delete t;
}

void display(node* head)
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    for(int i=1;i<=5;i++)
        insertTail(head,i);
    for(int i=6;i<=10;i++)
        insertHead(head,i);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}