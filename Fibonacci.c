/*Reucursin using formula*/
#include<stdio.h>

int Fibo(int n){
    
    if(n <= 1)
    return n;

    return Fibo(n-1) + Fibo(n-2);
    
}
int main()
{
    int n = 11;

    for(int i = 0; i < n; i++)
        printf("%d, ",Fibo(i));
    return 0;
}


/*using Recursion without using formula*/
#include<stdio.h>
int printFib(int n){
    static int a = 0, b = 1, nextTerm;    
    if(n > 0)
    {    
        nextTerm = a + b;    
        a = b;    
        b = nextTerm;    
        printf("%d, ",nextTerm);
        printFib(n-1);    
    }
    
}
int main()
{
    int n = 10;
    
    printf("0, 1, ");
    // n-2 as 2 terms already printed
    printFib(n-2);
    return 0;
}



/*Using for loop*/

int main()
{
    int n = 10;
    int a = 0, b = 1;
    
    // printing the 0th and 1st term
    printf("%d, %d",a,b);
    
    int nextTerm;
    
    // printing the rest of the terms here
    for(int i = 2; i < n; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        printf("%d, ",nextTerm);
    }

    return 0;
}