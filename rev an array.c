#include <stdio.h>
int main()
{
    int i,j,n,arr[10]; 
    printf("ENter the  size of array\n");
    scanf("%d",&n);
    printf("ENter the elementsone by one\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
