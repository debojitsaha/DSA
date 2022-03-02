#include<iostream>
#include<vector>
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

bool getPath(Node* root, int key, vector<int> &path)
{
    if(root==NULL)
        return false;
    
    path.push_back(root->data);
    if(root->data==key)
        return true;
    if(getPath(root->left,key,path) || getPath(root->right,key,path))
        return true;
    
    path.pop_back();
    return false;    
}

int LCA1(Node* root, int n1, int n2)                    // Naive & iterative approach.
{
    vector<int> path1, path2;

    if(!getPath(root,n1,path1) || !getPath(root,n2,path2))
        return -1;
    
    int pc;
    for(pc=0;pc<path1.size()&&path2.size();pc++)
    {
        if(path1[pc]!=path2[pc])
            break;
    }
    return path1[pc-1];    
}

Node* LCA2(Node* root, int n1, int n2)
{
    if(root==NULL)
        return NULL;

    if(root->data==n1 || root->data==n2)
        return root;
    
    Node* lh= LCA2(root->left,n1,n2);
    Node* rh= LCA2(root->right,n1,n2);

    if(lh && rh)
        return root;
    
    if(lh)
        return lh;
    else    
        return rh;
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

    int lca1= LCA1(root,6,7);

    if(lca1==-1)
        cout<<"Node doesn't exist\n";
    else
        cout<<"Lowest Common Ancestor= "<<lca1<<endl;

    Node* lca2= LCA2(root,4,5);
    if(lca2==NULL)
        cout<<"Node doesn't exist\n";
    else
        cout<<"Lowest Common Ancestor= "<<lca2->data<<endl;

    return 0;
}