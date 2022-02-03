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

void insert(node* &head, int val, int pos)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* t=head;
    for(int i=0;i<pos-1;i++)
        t=t->next;
    n->next=t->next;
    t->next=n;    
}

void deletion(node* &head, int pos)
{
    if(pos==0)
    {
        head= head->next;
        return;        
    }
    node* t=head;
    for(int i=0;i<pos-1;i++)
        t=t->next;
    node* del=t->next;
    t->next=t->next->next;
    delete del;
}

void reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL)
    {
        nextptr= currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;        
    }
    head=prevptr;
}

void display(node* head)
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"-> ";
        t=t->next;
    }
    cout<<"NULL\n";
}

int main()
{    
    node* n1= new node(5);
    node* n2= new node(10);
    node* n3= new node(15);
    node* n4= new node(20);
    node* n5= new node(25);
    node* n6= new node(30);
    node* head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=NULL;
    display(head);
    insert(head,22,4);
    display(head);
    deletion(head,4);
    display(head);
    reverse(head);
    display(head);
    return 0;    
}