#include<stdio.h>
//void DecimelToBin(int n);
//void BinaryToDec(int n);
void DecimelToHexa(int n);
int main()
{
  int n;
  printf("\nEnter the Number : ");
  scanf("%d",&n);
  //DecimelToBin(n);
  //BinaryToDec(n);
  DecimelToHexa(n);
  return 0;
}
void DecimelToBin(int n)
{
int r,m=1,bin=0;
    while(n!=0)
    {
        r = n % 2;
        bin = bin + (r*m);
        m = m * 10;
        n = n/2;
    }
 printf("\nBinary Value : %d",bin);
}

void BinaryToDec(int n)
{
int base = 1,d = 0,r;
while ( n > 0)  
{  
    r = n % 10; 
    d = d + (r * base);  
    n = n / 10; 
    base = base * 2;  
}  
  printf (" \n The decimal number is %d \t", d);
}
void DecimelToHexa(int n)
{
  int m = 1,hex = 0,r;
  while(n > 0)
  {
    r = n % 16;
    //hex = hex + (r * m);
    n = n / 16;
  }
  printf (" \n The hexadecimel number is %d \t", hex);
}
