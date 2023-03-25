#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 4, 3, 5, 3, 8,2};
    int n = 8;
    int i,j;
    for(i=0;i<n;i++)
    {
        int count =0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
         if(count == 2){
            printf("\n%d is the reapting element\n",arr[i]);
        } 
    }
}