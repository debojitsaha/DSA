#include<iostream>
using namespace std;

int binarySearch(int v[],int l, int h, int key)
{
    while(l<=h)
    {
        int mid= (l+h)/2;
        if(v[mid]==key)
            return mid;
        else if(v[mid]>key)
            h=mid-1;
        else    
            l=mid+1;
    }    
    return -1;
}

int main()
{
    // Searching an element in an Infinite(vvv large) Sorted Array; without using the array/vector length.    
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    int v[n];
    cout<<"Enter Elements(sorted): ";
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int l=0,h=1,key;
    cout<<"Enter searching element= ";
    cin>>key;
    while(v[h]<key)
    {
        l=h;
        h*=2;
    }
    int x= binarySearch(v,l,h,key);
    if(x==-1)
        cout<<"Element not found!"<<endl;
    else    
        cout<<"Element found at index= "<<x<<endl;
    return 0;
}