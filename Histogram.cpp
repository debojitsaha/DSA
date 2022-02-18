#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> prevSmaller(int a[], int n)
{
    vector<int>v;
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && a[st.top()]>=a[i])
            st.pop();
        if(st.empty())
            v.push_back(-1);
        else
            v.push_back(st.top());
        st.push(i);
    }
    return v;
}

vector<int> nextSmaller(int a[], int n)
{
    vector<int>v;
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && a[st.top()]>=a[i])
            st.pop();
        if(st.empty())
            v.push_back(n);
        else
            v.push_back(st.top());
        st.push(i);
    }
    reverse(v.begin(),v.end());
    return v;
}

int maxHistogram(int a[], int n)
{
    vector<int> ns;
    vector<int> ps;
    ps= prevSmaller(a,n);
    ns= nextSmaller(a,n);
    int maxArea=0;    
    for(int i=0;i<n;i++)
    {
        int x= (ns[i]-ps[i]-1)*a[i];
        maxArea= max(maxArea,x);
    }
    return maxArea;
}

int maxSubmatrix()
{
    int a[4][6]={{0,1,1,1,0},{1,1,1,1,0,1},{1,1,0,1,1,1},{1,1,1,1,1,0}};
    int curr[6];
    for(int i=0;i<6;i++)
        curr[i]=a[0][i];
    int maxAns= maxHistogram(curr,6);
    for(int i=1;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(a[i][j]==1)
                curr[j]++;
            else    
                curr[j]=0;
        }        
        int currAns= maxHistogram(curr,6);
        maxAns= max(maxAns,currAns);
    }
    return maxAns;
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
        
    cout<<"Max Histogram Area= "<<maxHistogram(a,n)<<endl;
    cout<<"Max binary sub-matrix= "<<maxSubmatrix()<<endl;          //Maximum size rectangle binary sub-matrix with all 1s

    return 0;
}