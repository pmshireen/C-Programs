#include<stdio.h>
void main(){
    int arr[] = {1, 2, 4, 3, 5, 3, 3, 9, 1, 5, 4, 3 ,2 ,2 ,1};
    int n = 15;
    int res[100];
    for(int i=0;i<n;i++){
        res[i] = 0;
    }
    for(int i=0;i<n;i++){
        int c = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                c++;
            }
        }
        if(c % 2 != 0 && res[i] == 0) printf("Odd Times - %d(%d)\n",arr[i],c);
        else if(c % 2 == 0 && res[i] == 0) printf("Even Times - %d(%d)\n",arr[i],c);
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                res[j] = 1;
            }
        }
        // for(int j=0;j<n;j++){
        //     printf("%d ",res[j]);
        // }
        // printf("\n");
    }
}