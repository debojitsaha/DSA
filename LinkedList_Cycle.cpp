#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int v)
    {
        data=v;
        next=NULL;
    }
};

void makeCycle(node* &head, int pos)
{
    node* t=head;
    node* cycle;
    int c=1;    
    while(t->next!=NULL)
    {
        if(c==pos)
            cycle=t;
        c++;
        t=t->next;
    }
    t->next=cycle;
}

bool detectCycle(node* head)
{
    node* hare=head;
    node* tortoise=head;
    while(hare!=NULL && hare->next!=NULL)
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
        if(hare==tortoise)
            return true;
    }
    return false;
}

void removeCycle(node* &head)
{
    if(detectCycle(head)==0)
        return;
    node* hare=head;
    node* tortoise=head;
    do
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
    } while (hare!=tortoise);
    if(hare==head)
    {
        while(tortoise->next!=head)
            tortoise=tortoise->next;
        tortoise->next=NULL;
        return;
    }

    hare=head;
    while (hare->next!=tortoise->next)
    {
        hare=hare->next;
        tortoise=tortoise->next;
    }
    tortoise->next=NULL;
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
    cout<<detectCycle(head)<<endl;
    display(head);
    makeCycle(head,1);
    //display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    cout<<detectCycle(head)<<endl;
    return 0;
}