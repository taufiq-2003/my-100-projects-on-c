#include <stdio.h>

int main(){
  float number;
  printf("enter the number  \n");
  scanf("%f", &number);
  
   if (number<0)
   {
    printf("the number you entered is negative  \n");
    
  }
  else if (number>0)
  {
     printf("the number you entered is positive \n");
     
    }
    else if (number ==0) 
    {
     printf("the number you entered is zero \n");
    
   }
   



  return 0;
}