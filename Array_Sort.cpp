#include<iostream>
using namespace std;

void swap(int a[],int x,int y)
{
    int t=a[x];
    a[x]=a[y];
    a[y]=t;
}

void bubble(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a,j,j+1);
            }
        }
    }
}

void insertion(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int t= a[i];
        int j=i-1;
        while(j>=0 && a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
        
    }
}

void selection(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            m= a[m]>a[j]?j:m;
        }
        if(m!=i)       
            swap(a,m,i);
        
    }
}

int partition(int a[], int l, int h)
{
    int pivot= a[l];
    int i=l, j=h;
    while (i<j)
    {
        while(a[i]<=pivot)
            i++;
        while (a[j]>pivot)
            j--;
        if(i<j)
            swap(a,i,j);
    }
    swap(a,j,l);
    return j;
    
}

void quick(int a[], int l, int h)
{
    if(l<=h)
    {
        int k= partition(a,l,h);
        quick(a,l,k-1);
        quick(a,k+1,h);
    }
    return;
}

void merge(int a[],int l,int mid,int h)
{
    int i=l, j=mid+1, k=l;
    int b[h+1];
    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=h)
        {
            b[k]=a[j];
            i=j++;k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            k++;i++;
        }
    }
    for(k=l;k<=h;k++)
        a[k]=b[k];
}

void mergesort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid= (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}


int main()
{
    int n;
    cout<<"Enter no. of elements= ";
    cin>>n;
    int a[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"1. Bubble Sort\n 2. Insertion Sort\n 3. Selection Sort\n 4.Quick Sort\n 5. Merge Sort\n";
    int x;
    cout<<"Enter Sort Choice= ";
    cin>>x;
    switch (x)
    {
    case 1:
        bubble(a,n);
        break;
    case 2:
        insertion(a,n);
        break;
    case 3:
        selection(a,n);
        break;
    case 4:
        quick(a,0,n-1);
        break;
    case 5:
        mergesort(a,0,n-1);
        break;
    default:
        cout<<"Invalid Choice!";
        break;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    
    return 0;
}