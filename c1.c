// An Element is called leader if it is greater than all element to the right of it. The time complexity of the most efficient algo to print all leaders of the given array of size "n" is _________

// Brut Force

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
 
    for(int i=1; i<=n-1;i++)
    {
        // max=a[i];
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
               break;
            }
        }
        if(j==n+1)
        {
            printf("Leader is %d \n",a[i]);
        }
    }
    return 0;
}