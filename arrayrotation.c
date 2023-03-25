#include<stdio.h>
void rotateArray(int arr[],int n);
int arr[30],n,i,j;
int main()
{
    //int arr[30],n,i,j;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }    
    rotateArray(arr,n);
    return 0;
    
}
void rotateArray(int arr[], int n)
{
    int last;
   // last = arr[0];
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>0;j--)
        {
            arr[j] = arr[j-1];

        }
      
    }
     
   // arr[0] = last;
    printf("rotated array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }  

}