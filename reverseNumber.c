#include<stdio.h>
void main()
{
    int rev = 0;
    int rem,x;
    printf("Enter the number x: ");
    scanf("%d",&x);
    while(x!=0)
    {
        rem = x % 10;
        rev = (rev*10) + rem;
        x = x/10;

    }
    printf("Reversed number is %d\n",rev);
}