#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter no. of days= ";
    cin>>N;
    int a[N];
    cout<<"Enter Stock Prices:";
    for(int i=0;i<N;i++)
        cin>>a[i];
    
    int maxProfit=0, minPrice=a[0],j=0;
    for(int i=1;i<N;i++)
    {
        minPrice= min(minPrice,a[i]);
        int profit= a[i]-minPrice;
        if(maxProfit<profit)
        {
            maxProfit=profit;
            j=i+1;
        }
    }
    cout<<"Max Profit= "<<maxProfit<<endl;              //Limited to 1 transaction.
    cout<<"Stock Sell Day= "<<j<<endl;
    return 0;
}