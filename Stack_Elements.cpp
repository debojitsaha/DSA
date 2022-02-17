#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> previousSmaller(int a[], int n)
{
    vector<int>v;    
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while (!st.empty() && st.top()>=a[i])        
            st.pop();
        if(st.empty())
            v.push_back(-1);
        else
            v.push_back(st.top());       
        st.push(a[i]);
    }
    return v;
}

vector<int> previousGreater(int a[], int n)
{
    vector<int>v;
    stack<int>st;
    for (int i=0;i<n;i++)
    {
        while(!st.empty() && st.top()<=a[i])
            st.pop();
        if(st.empty())
            v.push_back(-1);
        else
            v.push_back(st.top());
        st.push(a[i]);
    }
    return v;
    
}

vector<int> nextSmaller(int a[], int n)
{
    vector<int>v;
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()>=a[i])
            st.pop();
        if(st.empty())
            v.push_back(-1);
        else    
            v.push_back(st.top());
        st.push(a[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}

vector<int> nextGreater(int a[], int n)
{
    vector<int>v;
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=a[i])
            st.pop();
        if(st.empty())
            v.push_back(-1);
        else
            v.push_back(st.top());
        st.push(a[i]);
    }
    reverse(v.begin(),v.end());
    return v;
}

int main()
{
    int n;
    cout<<"Enter Array Size= ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int>v= previousSmaller(a,n);
    cout<<"Previous Smaller Elements:";
    for(auto& i:v)
        cout<<i<<" ";
    cout<<endl;

    v= previousGreater(a,n);
    cout<<"Previous Greater Elements: ";
    for(auto& i:v)
        cout<<i<<" ";
    cout<<endl;

    v= nextSmaller(a,n);
    cout<<"Next Smaller Elements: ";
    for(auto& i:v)
        cout<<i<<" ";
    cout<<endl;

    v= nextGreater(a,n);
    cout<<"Next Greater Elements: ";
    for(auto& i:v)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}