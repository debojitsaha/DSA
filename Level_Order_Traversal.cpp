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

struct Node* createTree()
{
    struct Node* root=NULL;
    int data;
    cout<<"Enter data= ";
    cin>>data;
    
    if(data==-1)
        return NULL;
    root= new Node(data);

    cout<<"Enter left for "<<data<<endl;
    root->left=createTree();
    cout<<"Enter right for "<<data<<endl;
    root->right=createTree();

    return root;
}

void Traversal1(Node* root)
{
    if(root==NULL)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node* curr= q.front();
        q.pop();
        if(curr!=NULL)
        {
            cout<<curr->data<<" ";
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        else if(!q.empty())
        {
            cout<<endl;
            q.push(NULL);
        }
    }
}

int main()
{
    Node* root=  createTree();
    
    cout<<"Level Order Traversal:"<<endl;
    Traversal1(root);
    cout<<endl;

    return 0;
}
