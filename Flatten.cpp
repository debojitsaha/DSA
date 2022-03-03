#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node *pr= NULL, *head=NULL;

void flat(Node* root)
{
    if(root==NULL)
        return;

    flat(root->left);
    if(pr==NULL)
        head=root;
    else
    {        
        root->left=pr;
        pr->right=root;
    }
    pr=root;
    flat(root->right);
}

void inorder(Node* root)
{
    if(root==NULL)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void display(Node* head)
{
    Node* t= head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->right;
    }
    cout<<endl;
}

int main()
{
    Node* root= new Node(3);
    root->left= new Node(5);
    root->right= new Node(2);
    root->right->left= new Node(1);
    root->right->left->left= new Node(4);
    root->right->left->right= new Node(6);

    inorder(root);
    cout<<endl;
    flat(root);                         // Flatten a Binary Tree into Doubly Linked List.
    display(head);      

    return 0;
}