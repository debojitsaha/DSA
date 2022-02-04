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

void insertNodes(node* &head, int val)
{
    node* n= new node(val);
    if(head==NULL)
    {        
        head=n;
        return;
    }
    node* t=head;
    while(t->next!=NULL)    
        t=t->next;
    t->next=n;    
}

int len(node* head)
{
    int l=0;
    node* t=head;
    while(t!=NULL)
    {
        t=t->next;
        l++;
    }
    return l;
}

node* kAppend(node* &head, int k)
{
    int l= len(head), c=1;
    node* t=head;    
    node* newhead;
    node* newtail;
    k=k%l;
    while(t->next!=NULL)
    {
        if(c==l-k)
            newtail=t;
        if(c==l-k+1)
            newhead=t;
        t=t->next;
        c++;
    }    
    newtail->next=NULL;
    t->next=head;
    return newhead;
}

void display(node* head)
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<"NULL\n";
}

int main()
{
    node* head= NULL;
    for(int i=1;i<=50;i++)
        insertNodes(head,i);
    display(head);
    //cout<<len(head)<<endl;
    node* newhead= kAppend(head,20);
    display(newhead);
    return 0;
}