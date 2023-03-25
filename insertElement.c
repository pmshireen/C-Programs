#include<stdio.h>
 void main()
{
    int i,j,n,k=0,a[50],b[50],c[50];
    int element,pos;
    printf("Enter the size of the array\n ");
    scanf("%d",&n);
    printf("ENter the elements of the first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENter the element to insert\n");
    scanf("%d",&element);
    printf("ENter the positon to insert\n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
         a[i+1] = a[i];
       
    }
    a[pos-1] = element;
    n++;
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }



}
