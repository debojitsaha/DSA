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

Node* LCA(Node* root, int n1, int n2)
{
    if(root==NULL)
        return NULL;

    if(root->data==n1 || root->data==n2)
        return root;

    Node* lh= LCA(root->left,n1,n2);
    Node* rh= LCA(root->right,n1,n2);
    if(lh && rh)
        return root;
    if(lh)
        return lh;
    else
        return rh;
}

int distance(Node* root, int k, int d)
{
    if(root==NULL)
        return -1;
    if(root->data==k)
        return d;
    
    int l= distance(root->left,k,d+1);
    if(l!=-1)
        return l;
    return distance(root->right,k,d+1);
}

int main()
{
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->right->left= new Node(5);
    root->right->right= new Node(6);
    root->right->left->left= new Node(7);
    root->right->left->right= new Node(8);

    Node* lca= LCA(root,7,6);
    int d1= distance(lca,7,0);
    int d2= distance(lca,6,0);
    cout<<"Lowest Common Ancestor= "<<lca->data<<endl;
    //cout<<d1<<" "<<d2<<endl;
    cout<<"Distance between 2 Nodes= "<<d1+d2<<endl;

    return 0;
}