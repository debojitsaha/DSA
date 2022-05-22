#include<stdio.h>

void upperTriangle()
{
    int n,m;
    printf("Enter rows & columns: ");
    scanf("%d %d",&n,&m);
    int a[n][m];

    printf("Enter array a: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);

    printf("Array a:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)                
            printf("%d ",a[i][j]);            
        printf("\n");
    }

    printf("Upper Triangle:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j>=i)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main()
{
    upperTriangle();

    return 0;
}