#include<stdio.h>

void multiply()
{
    int n,m;
    printf("Enter rows & columns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[m][n];
    int c[n][n];

    printf("Enter array a: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    printf("Enter array b: ");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            c[i][j]=0;

    for(int i=0;i<n;i++)
    {        
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
                c[i][j]+= a[i][k]*b[k][j];
        }        
    }

    printf("Array a:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("Array b:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("Array c:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}

void add()
{
    int n,m;
    printf("Enter rows & columns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[n][m];
    int c[n][m];

    printf("Enter Array a: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Array b: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&b[i][j]);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            c[i][j]= a[i][j]+b[i][j];

    printf("Array a:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("Array b:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("Array c:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}

void subtract()
{
    int n,m;
    printf("Enter rows & columns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];
    int b[n][m];
    int c[n][m];

    printf("Enter Array a: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Array b: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&b[i][j]);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            c[i][j]= a[i][j]-b[i][j];

    printf("Array a:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("Array b:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("Array c:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}

int main()
{
    multiply();
    add();
    subtract();

    return 0;
}