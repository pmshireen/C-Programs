#include <stdio.h>
void sort(int arr[],int n);
void duplicate(int arr[] ,int n);

int main()
{
    int k = 0;
    int arr[30],b[k],i,n;
    printf("Enter  no of the elements\n");
    scanf("%d",&n);
    printf("Enter the elements onr by one\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    sort(arr,n);
    printf("Sorted elements\n");
     for(i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    duplicate(arr,n);
    printf("\nprinting elements in b array\n");
     for (k=0;k<n;k++)
    {
        printf("%d\t",b[k]);
    }

}
void sort(int arr[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i] > arr[j])
         {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
         }
     }
  }
 
}
void duplicate(int arr[] ,int n)
{
    int dup,i,j;
    int b[5],k=0;
    for(i=1;i<n;i++)
    {
        dup = arr[0];
        if(arr[0] == arr[i])
        {
            b[k] = arr[i];
            k++;
        }
    }
   
}





