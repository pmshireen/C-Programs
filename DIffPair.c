#include<stdio.h>
#include<stdlib.h>
int main(){

    int arr[] = {5, 20, 3, 2, 50, 80}; 
    int diff = 78;
    int n = 6;
    int res[30],temp;
    int f = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp = arr[i] + arr[j];
            if(temp > diff && abs(arr[i]-arr[j]) == diff){
                printf("sum greater thaan 78: %d + %d = %d\n",i,j,temp);
                printf("Result is %d,%d\n",arr[i],arr[j]);
                f = 1;
                break;
            }
            if(f == 1) break;
        }
        
    
    }

}