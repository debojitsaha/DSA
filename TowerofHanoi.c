#include<stdio.h>

void towerOfHanoi(char A, char B, char C, int n)
{
    if(n==1)
        printf("Move from %c to %c\n",A,C);
    else
    {
        towerOfHanoi(A,C,B,n-1);
        towerOfHanoi(A,B,C,1);
        towerOfHanoi(B,A,C,n-1);
    }    
}

int main()
{
    towerOfHanoi('A','B','C',5);

    return 0;
}