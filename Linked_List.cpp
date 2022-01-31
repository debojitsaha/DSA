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
    return 0;    
}