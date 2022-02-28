#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void replace(Node* root)
{
    if(root==NULL)
        return;
    
    replace(root->left);
    replace(root->right);

    if(root->left)
        root->data+=root->left->data;
    if(root->right)
        root->data+=root->right->data;
}

void preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    preorder(root);
    cout<<endl;
    replace(root);
    preorder(root);
    cout<<endl;

    return 0;
}