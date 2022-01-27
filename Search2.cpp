#include<iostream>
using namespace std;
int binarySearch(int a[],int l,int h, int key)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>a[l])                        //Left part is sorted or not.
        {
            if(key>=a[l] && key<a[mid])
                h=mid-1;
            else    
                l=mid+1;
        }
        else                                       //Right part is sorted or not.
        {
            if(key>a[mid] && key<=a[h])
                l=mid+1;
            else    
                h=mid-1;
        }
    }
    return -1;
}

int main()
{
    // Searching an element in an Sorted & Rotated Array.
    int n;
    cout<<"Enter limit= ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    int l=0,h=n-1,key;
    cout<<"Enter searching element= ";
    cin>>key;
    int x= binarySearch(a,l,h,key);
    if(x==-1)
        cout<<"Element not found!\n";
    else    
        cout<<"Element found at index= "<<x<<endl;
    return 0;
}