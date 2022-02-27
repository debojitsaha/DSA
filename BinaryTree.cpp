#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

struct Node* createTree()
{
    struct Node* root= NULL;
    cout<<"Enter data= ";
    int data;
    cin>>data;    

    if(data==-1)
        return NULL;
    root= new Node(data);

    cout<<"Enter left for "<<data<<endl;    
    root->left= createTree();

    cout<<"Enter right for "<<data<<endl;    
    root->right=createTree();

    return root;
}

void preorder(struct Node* root)
{
    if(root==NULL)
        return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root==NULL)
        return;
        
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root==NULL)
        return;
        
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int height(struct Node* root)
{
    if(root==NULL)
        return 0;
    return (max(height(root->left),height(root->right))+1);
}

int size(struct Node* root)
{
    if(root==NULL)
        return 0;
    return size(root->left)+size(root->right)+1;
}

int maxNode(struct Node* root)
{
    if(root==NULL)
        return INT16_MIN;
    return max(root->data,max(maxNode(root->left),maxNode(root->right)));
}

int minNode(struct Node* root)
{
    if(root==NULL)
        return INT16_MAX;
    return min(root->data,min(minNode(root->left),minNode(root->right)));
}

int main()
{
    struct Node* root= createTree();
    cout<<"\nPreorder Traversal: ";
    preorder(root);    
    cout<<"\nInorder Traversal: ";
    inorder(root);    
    cout<<"\nPostorder Traversal: ";
    postorder(root);
    cout<<endl;
    cout<<"Height of Binary Tree= "<<height(root)<<endl;
    cout<<"Size of Binary Tree= "<<size(root)<<endl;
    cout<<"Max value of Binary Tree= "<<maxNode(root)<<endl;
    cout<<"Min value of Binary Tree= "<<minNode(root)<<endl;

    return 0;
}