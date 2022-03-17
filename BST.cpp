#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

node* insertBST(node* root, int val)
{
    if(root==NULL)
        return new node(val);
    
    if(root->data>val)
        root->left= insertBST(root->left, val);
    else
        root->right= insertBST(root->right, val);
    
    return root;    
}

node* searchBST(node* root, int key)
{
    if(root==NULL)
        return NULL;
    if(root->data==key)
        return root;
    else if(root->data>key)
        return searchBST(root->left,key);
    return searchBST(root->right,key);
}

int inorderSuccessor(node* root)
{
    node* curr= root;
    while(curr->left)
        curr=curr->left;
    return curr->data;
}

node* deleteBST(node* root, int key)
{
    if(root==NULL)
        return NULL;
    
    if(root->data>key)
        root->left= deleteBST(root->left,key);
    else if(root->data<key)
        root->right= deleteBST(root->right,key);
    else
    {
        if(!root->left)
            return root->right;
        else if(!root->right)
            return root->left;
        
        root->data= inorderSuccessor(root->right);
        root->right= deleteBST(root->right, root->data);
    }
    return root;
}

void inorder(node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node* root= NULL;
    root= insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    inorder(root);
    cout<<endl;

    deleteBST(root,5);
    inorder(root);
    cout<<endl;

    if(searchBST(root,2))
        cout<<"Key exists!\n";
    else    
        cout<<"Key doesn't exist\n";

    return 0;
}