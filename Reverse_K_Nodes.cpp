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

node* reverseK(node* &head, int k)
{
    node* prevptr=NULL;
    node* currptr= head;
    node* nextptr;
    int c=1;
    while(currptr!=NULL && c<=k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        c++;
    }
    if(currptr!=NULL)
        head->next= reverseK(nextptr,k);    
    return prevptr;
}

void display(node* head)
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<"NULL\n";
}

int main()
{
    node* n1= new node(1);
    node* n2= new node(2);
    node* n3= new node(3);
    node* n4= new node(4);
    node* n5= new node(5);
    node* n6= new node(6);
    node* head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=NULL;
    display(head);
    head= reverseK(head,2);
    display(head);
    return 0;
}