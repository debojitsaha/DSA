#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

bool isBST(Node* root, Node* minL=NULL, Node* maxR=NULL)
{
    if(root==NULL)
        return true;
    
    if(minL && root->data<=minL->data)
        return false;
    if(maxR && root->data>=maxR->data)
        return false;
    
    bool leftValid= isBST(root->left,minL,root);
    bool rightValid= isBST(root->right,root,maxR);
    return leftValid && rightValid;
}

int main()
{
    Node* root= new Node(2);
    root->left= new Node(1);
    root->right= new Node(3);

    cout<<isBST(root)<<endl;
}