//Input: x = 121
//Output: true
//Explanation: 121 reads as 121 from left to right and from right to left.
bool isPalindrome(int x){
   
   int rev=0,rem;
   int dup = x;
   while(x>0)
   {
       rem = x%10;
       rev = (rev * 10) + rem;
       x = x/10;
    }
    if(dup == rev)
    return true;
    else
    return false;
}