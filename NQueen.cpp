#include<iostream>
using namespace std;

bool isSafe(int** Q, int i, int j, int N)
{
    int x=i,y=j;
    /*for(;y<N;y++)
        if(Q[x][y]==1)
            return false;
    y=j;*/
    for(int a=0;a<=i;a++)
        if(Q[a][y]==1)
            return false;
    x=i;
    while(x>=0 && y>=0)
    {
        if(Q[x][y]==1)
            return false;
        x--;y--;
    }
    x=i,y=j;
    while(x>=0 && y<N)
    {
        if(Q[x][y]==1)
            return false;
        x--;y++;
    }
    return true;
}

bool nQueen(int** Q, int N, int r)
{
    if(r>=N)
        return true;
    for(int col=0;col<N;col++)
    {
        if(isSafe(Q,r,col,N))
        {
            Q[r][col]=1;
            if(nQueen(Q,N,r+1))
                return true;
            Q[r][col]=0;
        }
    }
    return false;
}

int main()
{   
    int N;
    cout<<"Enter board size= ";
    cin>>N;
    int** Q= new int*[N];
    for(int i=0;i<N;i++)
    {
        Q[i]=new int[N];
        for(int j=0;j<N;j++)
            Q[i][j]=0;
    }
    if(nQueen(Q,N,0))
    {
        for(int i=0;i<N;i++)
        {        
            for(int j=0;j<N;j++)
                cout<<Q[i][j]<<" ";
            cout<<endl;
        }   
    }
    else    
        cout<<"NQueen not possible\n";
    return 0;
}