// How to insert and show output using array 

#include<stdio.h>
int main()
{
    int n,j;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        printf ("Enter the array element on the place %d :",i);
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        printf(" the a[%d] is %d :",i,a[i]);
    }
}