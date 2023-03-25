#include<stdio.h>
void main()
{
    int k,n,arr[30];
    printf("Enter the  size of array");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    printf("Enter the number of rotations\n");
    scanf("%d",&k);
    for(i=0;i<n.i++)
    {
         arr[(i+k)%n] = arr[i];
    }
    printf("the rotated array elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }








}