#include<iostream>
#include<queue>
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

int sumNode(Node* root, int k)
{
    if(root==NULL)
        return -1;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0, S=0;

    while(!q.empty())
    {
        Node* curr= q.front();
        q.pop();

        if(curr!=NULL)
        {
            if(level==k)
                S+=curr->data;
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return S;
}

int main()
{
    Node* root= createTree();
    int k;
    cout<<"Enter Sum Level= ";
    cin>>k;

    cout<<"Sum at Node "<<k<<"= "<<sumNode(root,k)<<endl;

    return 0;
}