 #include<stdio.h>
 void main(){
   int i,j,n,k=0,count,a[50],b[50],c[50];
   printf("Enter the size of the array\n ");
   scanf("%d",&n);
   printf("ENter the elements of the first array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(a[i] == a[j]){
               count ++;
            }
        }
      
       c[k] = count;
       k++;
    }
    
    printf("frequency count of all numbers\n");
    for(i=0;i<n;i++){
        printf("a[%d] = %d\n",i,c[i]);
    }
}
