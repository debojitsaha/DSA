#include<iostream>
#include<stack>
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

void Traversal(Node* root)
{
    if(root==NULL)
        return;

    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    bool direction=true;
    currLevel.push(root);
    while(!currLevel.empty())
    {
        Node* t= currLevel.top();
        currLevel.pop();
        if(t)
        {
            cout<<t->data<<" ";

            if(direction)
            {
                if(t->left)
                    nextLevel.push(t->left);
                if(t->right)
                    nextLevel.push(t->right);
            }
            else
            {
                if(t->right)
                    nextLevel.push(t->right);
                if(t->left)
                    nextLevel.push(t->left);
            }
        }
        if(currLevel.empty())
        {
            direction=!direction;
            swap(nextLevel,currLevel);
        }
    }
}

int main()
{
    Node* root= new Node(12);
    root->left= new Node(9);
    root->right= new Node(15);
    root->left->left= new Node(5);
    root->left->right= new Node(10);

    cout<<"Zig Zag Traversal: ";
    Traversal(root);
    cout<<endl;

    return 0;
}