#include<stdio.h>
void main()

{
    int i,j,n,k,a[10],b[10],c[10];
    printf("Enter the elements\n");
    scanf("%d",&n);
    i = a[n-1];
    j = b[n-1];
    int temp[10];
    printf("ENter the elements of the first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENter the elements of the second array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    while(i>=0 && j>=0)
    {
        if(a[i] > b[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
          temp[k] = b[j];
            j++;
        }

    }
    k++;
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d",temp[k]);
    }
   
}