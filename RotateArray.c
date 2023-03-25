#include<stdio.h>
void main()
{
    int i,k = 1,n,arr[30];
    int temp;
    printf("Enter the  size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        arr[(i+k)%n] = arr[i];
    }
    printf("rotated elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",arr[i]);
    }

}