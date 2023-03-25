/*Factorial using while loop*/
int main()
{
   
  int fact =1;
  int i=1,n;
  while(i<=5){
    fact = fact*i;
    i++;
  }
  printf("fact = %d\n",fact);
  return 0;
}



/*Factorial using Recursion*/
/*#include<stdio.h>
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
void main()  
{  
  int number;  
  long fact;  
  printf("Enter a number: ");  
  scanf("%d", &number);   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
  return 0;  
}  
*/



/*Factorial using for loop*/ 

/*
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   */