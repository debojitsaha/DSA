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

void intersect(node* &head1, node* &head2,int pos)
{
    node* t=head1;
    while(--pos)
        t=t->next;
    node* t2=head2;
    while(t2->next!=NULL)
        t2=t2->next;
    t2->next=t;
}

int len(node* head)
{
    int c=0;
    node* t=head;
    while(t!=NULL)
    {
        c++;
        t=t->next;
    }
    return c;
}

int intersection(node* head1, node* head2)
{
    int l1= len(head1), l2= len(head2);    
    int d;
    node* ptr1;
    node* ptr2;
    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d-->0 && ptr1!=NULL)    
        ptr1=ptr1->next;
    while(ptr2!=NULL && ptr1!=NULL)
    {
        if(ptr1==ptr2)
            return ptr1->data;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
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
    for(int i=1;i<=10;i++)
        insertion(head1,i);
    for(int i=7;i<=10;i++)
        insertion(head2,i);
    intersect(head1,head2,7);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;
    return 0;
}