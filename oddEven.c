#include<stdio.h>
 void main()
 {
   int i,j,n,k=0,count,a[50],b[50];
   printf("Enter the size of the array\n ");
   scanf("%d",&n);
   printf("ENter the elements of the first array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] %2 == 0)
        {
            printf("%d is an even number\n",a[i]);
        }
        else
        printf("%d is the odd number\n",a[i]);
    }
}