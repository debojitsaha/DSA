#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void rightView(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n= q.size();
        for(int i=0;i<n;i++)
        {
            Node* curr= q.front();
            q.pop();
            if(i==n-1)
                cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
}

void leftView(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n= q.size();
        for(int i=0;i<n;i++)
        {
            Node* curr= q.front();
            q.pop();
            if(i==0)
                cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
    }
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
    root->left->left->left= new Node(8);

    cout<<"Right View of Binary Tree: ";
    rightView(root);
    cout<<endl;

    cout<<"Left View of Binary Tree: ";
    leftView(root);
    cout<<endl;


    return 0;
}