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
        head=n;
        return;
    }
    node* t=head;
    while(t->next!=NULL)
        t=t->next;
    t->next=n;
}

node* merge(node* &head1, node* &head2)
{
    node* res;
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    if(head1->data<head2->data)
    {
        res=head1;
        res->next=merge(head1->next,head2);
    }
    else
    {
        res=head2;
        res->next=merge(head1,head2->next);
    }
    return res;

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
    node* head1=NULL;
    node* head2=NULL;
    for(int i=1;i<=10;i+=2)
        insertion(head1,i);
    for(int i=2;i<=10;i+=2)
        insertion(head2,i);
    display(head1);
    display(head2);
    node* newHead= merge(head1,head2);
    display(newHead);
    return 0;
}