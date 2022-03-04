#include<iostream>
#include<queue>
#include<map>
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
    if(root==NULL)
        return;

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
    if(root==NULL)
        return;

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

class Pair                  // used in Top & Bottom View Level Queues
{
    public:
    int hd;
    Node* node;    
    Pair(int h, Node* nod)
    {
        hd=h;
        node= nod;
    }
};

void topView(Node* root)
{
    if(root==NULL)
        return;

    queue<Pair> q;
    map<int, int> M;
    
    q.push(Pair(0, root));
    while(!q.empty())
    {        
        Pair curr= q.front();
        q.pop();
        
        if(M.find(curr.hd)==M.end())        
            M[curr.hd]= curr.node->data;                    
        
        if(curr.node->left!=NULL)    
            q.push(Pair(curr.hd-1, curr.node->left));
        if(curr.node->right!=NULL)
            q.push(Pair(curr.hd+1, curr.node->right));        
    }
    
    for(auto& i:M)
        cout<<i.second<<" ";
}

void bottomView(Node* root)
{
    if(root==NULL)
        return;

    queue<Pair> q;
    map<int,int> M;
    q.push(Pair(0,root));
    while(!q.empty())
    {
        Pair curr= q.front();
        q.pop();

        M[curr.hd]= curr.node->data;

        if(curr.node->left!=NULL)
            q.push(Pair(curr.hd-1,curr.node->left));
        if(curr.node->right!=NULL)
            q.push(Pair(curr.hd+1,curr.node->right));        
    }

    for(auto& i:M)
        cout<<i.second<<" ";
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

    /*  The above Binary Tree is as follows:           
                     1
                   /   \
                  2     3
                 / \   / \
                4   5  6  7
               /
              8
    */

    cout<<"Right View of Binary Tree: ";
    rightView(root);
    cout<<endl;

    cout<<"Left View of Binary Tree: ";
    leftView(root);
    cout<<endl;

    cout<<"Top View of Binary Tree: ";
    topView(root);
    cout<<endl;

    cout<<"Bottom View of Binary Tree: ";
    bottomView(root);
    cout<<endl;       
    
    return 0;
}