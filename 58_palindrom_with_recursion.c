#include <stdio.h> 

int reverse(int num,int rev);

int main()
{ 
  int number;
  printf("welcome to palindrome number checker with recursion  \n");
printf("enter a number:  \n");
  scanf("%d", &number);
  
  int rev =reverse(number,0);
  
  if (number == rev)
  {
    printf("%d is a palindrome umber  \n",number);
    
  }
  else {
    
    printf("%d is a not a  palindrome umber  \n",number);
  }
  
  
  return 0;
}

int reverse(int num,int rev){

  if (num==0)
  {
    return rev;
  }
  

  int new_remainder= num%10;
  int new_number= num/10;
  int new_rev = rev*10+new_remainder;

  return reverse(new_number,new_rev);

}