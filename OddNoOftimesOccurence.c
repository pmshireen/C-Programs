#include<stdio.h>
int main()
{
    int i,j,n,arr[10],count,dupli; 
    int res[10];
    printf("ENter the  size of array\n");
    scanf("%d",&n);
    printf("ENter the elements one by one\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
       res[i] = 0;
    }
     for(i=0;i<n;i++)
    {
        count = 0;
        for(j=0;j<n;j++)
        {
            if(arr[j] == arr[i])
            {
                count ++;
            }
        }
         if(count%2 != 0 && res[i]==0)
            {
                printf("\n%d is ocuuring odd no of times\n",arr[i]);
            }
            else if(res[i]==0)
            {
                printf("\n%d is occuring even number of times\n",arr[i]);
            }
            for(int j=0;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    res[i]=1;
                }
            }
             for(i=0;i<n;i++)
             {
               printf("%d",res[i]);
      
             }

          
    }
}