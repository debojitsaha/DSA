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

void position(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenS=even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }    
    odd->next=evenS;     
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
    node* head=NULL;
    for(int i=1;i<=15;i++)
        insertion(head,i);
    display(head);
    position(head);
    display(head);
    return 0;
}